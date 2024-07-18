// after connecting with cli in terminal

SET key value 
GET key         // value will output
GET *           // all keys
SETNX key value // if key exists, it cant update
TYPE key        // give datatype
EXISTS key
TTL key         // returns -1 for no ttl, -2 for key doesnt exist
EXPIRE key <seconds>
SETEX key seconds value