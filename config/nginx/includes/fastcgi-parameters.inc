# FastCGI parameters

fastcgi_param   CONTENT_LENGTH      $content_length;
fastcgi_param   CONTENT_TYPE        $content_type;
fastcgi_param   DOCUMENT_ROOT       $document_root;
fastcgi_param   DOCUMENT_URI        $document_uri;
fastcgi_param   GATEWAY_INTERFACE   CGI/1.1;
fastcgi_param   HTTPS               $https if_not_empty;
fastcgi_param   PATH_INFO           $fastcgi_path_info;
fastcgi_param   PATH_TRANSLATED     $document_root$fastcgi_path_info;
fastcgi_param   QUERY_STRING        $query_string;
fastcgi_param   REMOTE_ADDR         $remote_addr;
fastcgi_param   REMOTE_PORT         $remote_port;
fastcgi_param   REQUEST_BODY        $request_body;
fastcgi_param   REQUEST_BODY_FILE   $request_body_file;
fastcgi_param   REQUEST_METHOD      $request_method;
fastcgi_param   REQUEST_PATH        $uri;
fastcgi_param   REQUEST_URI         $request_uri;
fastcgi_param   SCHEME              $scheme;
fastcgi_param   SCRIPT_FILENAME     $document_root$fastcgi_script_name;
fastcgi_param   SCRIPT_NAME         $fastcgi_script_name;
fastcgi_param   SERVER_ADDR         $server_addr;
fastcgi_param   SERVER_NAME         $server_name;
fastcgi_param   SERVER_PORT         $server_port;
fastcgi_param   SERVER_PROTOCOL     $server_protocol;
fastcgi_param   SERVER_SOFTWARE     nginx;
fastcgi_param   SSL_CLIENT_VERIFY   $ssl_client_verify if_not_empty;
fastcgi_param   SSL_SESSION_ID      $ssl_session_id if_not_empty;

# Interesting read: https://httpoxy.org/#fix-now
fastcgi_param HTTP_PROXY "";