echo "initialing download from server...";echo "downloading nich.v1.2.tar.gz";wget "https://conorcert.dev/nich/nich.v1.2.tar.gz"
echo "extracting nich.v1.2.tar.gz";tar -xvf 'nich.v1.2.tar.gz';mkdir nich-stable;cp log.nich nich-stable;cp nich nich-stable;rm nich;rm log.nich;cp nich-stable/nich /usr/local/bin;cp nich-stable/log.nich /usr/local/bin;chmod 777 /usr/local/bin/nich;chmod 777 /usr/local/bin/log.nich
echo "installation complete."
