<html>
    <body>
        <?php
            print "Taxinomisi"."<br>\n";
            $fruits=array("one"=>"99","two"=>"100","three"=>"3","four"=>"4");
            print_r($fruits);
            print "<br>\n";
            asort($fruits);
            print_r($fruits);
            print "<br>\n";
            sort($fruits,SORT_NUMERIC);
            print_r($fruits);
            print "<br>\n";
            sort($fruits,SORT_STRING);
            print_r($fruits);
            print "<br>\n";
            rsort($fruits,SORT_NUMERIC);
            print_r($fruits);
            print "<br>\n";
            asort($fruits);
            print_r($fruits);
            print "<br>\n";
        ?>
    </body>
</html>