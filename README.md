# CiviCon sites

This repository has the code base that we currently use to create CiviCon and CiviCamp sites.

Our current policy is to use a multisite set up for all cons and camps, etc and to archive them .

## To deploy changes

To ensure file permissions are correct and for everyone's sanity, please use the following proceedure when deploying changes to production.

1. Log into www-prod: `$ ssh www-prod`
2. Switch to the civicon user: `sudo -u civicon -H bash`
3. Switch to the civicon directory: `$ cd /var/www/civicon`
4. Git pull: `$ git pull`

## To create a new site

1. create a new site directory in the sites/ directory

2. To share the user table we need to edit settings.php ...

```php`
$databases = array (
        'default' => array (
            'default' => array (
                'database' => 'xxx',
                'username' => 'xxx',
                'password' => 'xxx',
                'host' => 'xxx',
                'port' => 'xxx',
                'driver' => 'mysql',
                'prefix' => array('users' => '[civicrm.org drupal db].'),
                ),
            ),
        );
````
3. ... and grant select and update access for the civicon user on the civicrm.org database.

```mysql
`GRANT SELECT,UPDATE ON [civicrm.org drupal db].users TO [civicron user]@"[host]"
````
## To archive a site

Use wget

TODO: This documentation should be updated with appropriate archive instructions.
