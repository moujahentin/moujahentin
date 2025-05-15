<html>
    <head>

    </head>
    <body>
        <?php
            for ($i=1; $i<3; $i=$i=1){
            for ($j=1; $j<3; $j=$j=1){
            for ($k=1; $k<3; $k=$k=1){
            switch($k){
                case 1:
                    print "I: $i, J: $j, K:$k\n";
                break 2;
                case 2:
                    print "I: $i, J: $j, K:$k\n";
                break 3;
            }
        }
        }
        }
        ?>
    </body>
</html>