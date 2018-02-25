
#include "MIME_types.hpp"

std::map<std::string, std::string> mime_types = {
        {std::string(".3dm"),       "x-world/x-3dmf"},
        {std::string(".3dmf"),      "x-world/x-3dmf"},
        {std::string(".a"),         "application/octet-stream"},
        {std::string(".aab"),       "application/x-authorware-bin"},
        {std::string(".aam"),       "application/x-authorware-map"},
        {std::string(".aas"),       "application/x-authorware-seg"},
        {std::string(".abc"),       "text/vnd.abc"},
        {std::string(".acgi"),      "text/html"},
        {std::string(".afl"),       "video/animaflex"},
        {std::string(".ai"),        "application/postscript"},
        {std::string(".aif"),       "audio/aiff"},
        {std::string(".aif"),       "audio/x-aiff"},
        {std::string(".aifc"),      "audio/aiff"},
        {std::string(".aifc"),      "audio/x-aiff"},
        {std::string(".aiff"),      "audio/aiff"},
        {std::string(".aiff"),      "audio/x-aiff"},
        {std::string(".aim"),       "application/x-aim"},
        {std::string(".aip"),       "text/x-audiosoft-intra"},
        {std::string(".ani"),       "application/x-navi-animation"},
        {std::string(".aos"),       "application/x-nokia-9000-communicator-add-on-software"},
        {std::string(".aps"),       "application/mime"},
        {std::string(".arc"),       "application/octet-stream"},
        {std::string(".arj"),       "application/arj"},
        {std::string(".arj"),       "application/octet-stream"},
        {std::string(".art"),       "image/x-jg"},
        {std::string(".asf"),       "video/x-ms-asf"},
        {std::string(".asm"),       "text/x-asm"},
        {std::string(".asp"),       "text/asp"},
        {std::string(".asx"),       "application/x-mplayer2"},
        {std::string(".asx"),       "video/x-ms-asf"},
        {std::string(".asx"),       "video/x-ms-asf-plugin"},
        {std::string(".au"),        "audio/basic"},
        {std::string(".au"),        "audio/x-au"},
        {std::string(".avi"),       "application/x-troff-msvideo"},
        {std::string(".avi"),       "video/avi"},
        {std::string(".avi"),       "video/msvideo"},
        {std::string(".avi"),       "video/x-msvideo"},
        {std::string(".avs"),       "video/avs-video"},
        {std::string(".bcpio"),     "application/x-bcpio"},
        {std::string(".bin"),       "application/mac-binary"},
        {std::string(".bin"),       "application/macbinary"},
        {std::string(".bin"),       "application/octet-stream"},
        {std::string(".bin"),       "application/x-binary"},
        {std::string(".bin"),       "application/x-macbinary"},
        {std::string(".bm"),        "image/bmp"},
        {std::string(".bmp"),       "image/bmp"},
        {std::string(".bmp"),       "image/x-windows-bmp"},
        {std::string(".boo"),       "application/book"},
        {std::string(".book"),      "application/book"},
        {std::string(".boz"),       "application/x-bzip2"},
        {std::string(".bsh"),       "application/x-bsh"},
        {std::string(".bz"),        "application/x-bzip"},
        {std::string(".bz2"),       "application/x-bzip2"},
        {std::string(".c"),         "text/plain"},
        {std::string(".c"),         "text/x-c"},
        {std::string(".c++"),       "text/plain"},
        {std::string(".cat"),       "application/vnd.ms-pki.seccat"},
        {std::string(".cc"),        "text/plain"},
        {std::string(".cc"),        "text/x-c"},
        {std::string(".ccad"),      "application/clariscad"},
        {std::string(".cco"),       "application/x-cocoa"},
        {std::string(".cdf"),       "application/cdf"},
        {std::string(".cdf"),       "application/x-cdf"},
        {std::string(".cdf"),       "application/x-netcdf"},
        {std::string(".cer"),       "application/pkix-cert"},
        {std::string(".cer"),       "application/x-x509-ca-cert"},
        {std::string(".cha"),       "application/x-chat"},
        {std::string(".chat"),      "application/x-chat"},
        {std::string(".class"),     "application/java"},
        {std::string(".class"),     "application/java-byte-code"},
        {std::string(".class"),     "application/x-java-class"},
        {std::string(".com"),       "application/octet-stream"},
        {std::string(".com"),       "text/plain"},
        {std::string(".conf"),      "text/plain"},
        {std::string(".cpio"),      "application/x-cpio"},
        {std::string(".cpp"),       "text/x-c"},
        {std::string(".cpt"),       "application/mac-compactpro"},
        {std::string(".cpt"),       "application/x-compactpro"},
        {std::string(".cpt"),       "application/x-cpt"},
        {std::string(".crl"),       "application/pkcs-crl"},
        {std::string(".crl"),       "application/pkix-crl"},
        {std::string(".crt"),       "application/pkix-cert"},
        {std::string(".crt"),       "application/x-x509-ca-cert"},
        {std::string(".crt"),       "application/x-x509-user-cert"},
        {std::string(".csh"),       "application/x-csh"},
        {std::string(".csh"),       "text/x-script.csh"},
        {std::string(".css"),       "application/x-pointplus"},
        {std::string(".css"),       "text/css"},
        {std::string(".cxx"),       "text/plain"},
        {std::string(".dcr"),       "application/x-director"},
        {std::string(".deepv"),     "application/x-deepv"},
        {std::string(".def"),       "text/plain"},
        {std::string(".der"),       "application/x-x509-ca-cert"},
        {std::string(".dif"),       "video/x-dv"},
        {std::string(".dir"),       "application/x-director"},
        {std::string(".dl"),        "video/dl"},
        {std::string(".dl"),        "video/x-dl"},
        {std::string(".doc"),       "application/msword"},
        {std::string(".dot"),       "application/msword"},
        {std::string(".dp"),        "application/commonground"},
        {std::string(".drw"),       "application/drafting"},
        {std::string(".dump"),      "application/octet-stream"},
        {std::string(".dv"),        "video/x-dv"},
        {std::string(".dvi"),       "application/x-dvi"},
        {std::string(".dwf"),       "drawing/x-dwf (old)"},
        {std::string(".dwf"),       "model/vnd.dwf"},
        {std::string(".dwg"),       "application/acad"},
        {std::string(".dwg"),       "image/vnd.dwg"},
        {std::string(".dwg"),       "image/x-dwg"},
        {std::string(".dxf"),       "application/dxf"},
        {std::string(".dxf"),       "image/vnd.dwg"},
        {std::string(".dxf"),       "image/x-dwg"},
        {std::string(".dxr"),       "application/x-director"},
        {std::string(".el"),        "text/x-script.elisp"},
        {std::string(".elc"),       "application/x-bytecode.elisp (compiled elisp)"},
        {std::string(".elc"),       "application/x-elc"},
        {std::string(".env"),       "application/x-envoy"},
        {std::string(".eps"),       "application/postscript"},
        {std::string(".es"),        "application/x-esrehber"},
        {std::string(".etx"),       "text/x-setext"},
        {std::string(".evy"),       "application/envoy"},
        {std::string(".evy"),       "application/x-envoy"},
        {std::string(".exe"),       "application/octet-stream"},
        {std::string(".f"),         "text/plain"},
        {std::string(".f"),         "text/x-fortran"},
        {std::string(".f77"),       "text/x-fortran"},
        {std::string(".f90"),       "text/plain"},
        {std::string(".f90"),       "text/x-fortran"},
        {std::string(".fdf"),       "application/vnd.fdf"},
        {std::string(".fif"),       "application/fractals"},
        {std::string(".fif"),       "image/fif"},
        {std::string(".fli"),       "video/fli"},
        {std::string(".fli"),       "video/x-fli"},
        {std::string(".flo"),       "image/florian"},
        {std::string(".flx"),       "text/vnd.fmi.flexstor"},
        {std::string(".fmf"),       "video/x-atomic3d-feature"},
        {std::string(".for"),       "text/plain"},
        {std::string(".for"),       "text/x-fortran"},
        {std::string(".fpx"),       "image/vnd.fpx"},
        {std::string(".fpx"),       "image/vnd.net-fpx"},
        {std::string(".frl"),       "application/freeloader"},
        {std::string(".funk"),      "audio/make"},
        {std::string(".g"),         "text/plain"},
        {std::string(".g3"),        "image/g3fax"},
        {std::string(".gif"),       "image/gif"},
        {std::string(".gl"),        "video/gl"},
        {std::string(".gl"),        "video/x-gl"},
        {std::string(".gsd"),       "audio/x-gsm"},
        {std::string(".gsm"),       "audio/x-gsm"},
        {std::string(".gsp"),       "application/x-gsp"},
        {std::string(".gss"),       "application/x-gss"},
        {std::string(".gtar"),      "application/x-gtar"},
        {std::string(".gz"),        "application/x-compressed"},
        {std::string(".gz"),        "application/x-gzip"},
        {std::string(".gzip"),      "application/x-gzip"},
        {std::string(".gzip"),      "multipart/x-gzip"},
        {std::string(".h"),         "text/plain"},
        {std::string(".h"),         "text/x-h"},
        {std::string(".hdf"),       "application/x-hdf"},
        {std::string(".help"),      "application/x-helpfile"},
        {std::string(".hgl"),       "application/vnd.hp-hpgl"},
        {std::string(".hh"),        "text/plain"},
        {std::string(".hh"),        "text/x-h"},
        {std::string(".hlb"),       "text/x-script"},
        {std::string(".hlp"),       "application/hlp"},
        {std::string(".hlp"),       "application/x-helpfile"},
        {std::string(".hlp"),       "application/x-winhelp"},
        {std::string(".hpg"),       "application/vnd.hp-hpgl"},
        {std::string(".hpgl"),      "application/vnd.hp-hpgl"},
        {std::string(".hqx"),       "application/binhex"},
        {std::string(".hqx"),       "application/binhex4"},
        {std::string(".hqx"),       "application/mac-binhex"},
        {std::string(".hqx"),       "application/mac-binhex40"},
        {std::string(".hqx"),       "application/x-binhex40"},
        {std::string(".hqx"),       "application/x-mac-binhex40"},
        {std::string(".hta"),       "application/hta"},
        {std::string(".htc"),       "text/x-component"},
        {std::string(".htm"),       "text/html"},
        {std::string(".html"),      "text/html"},
        {std::string(".htmls"),     "text/html"},
        {std::string(".htt"),       "text/webviewhtml"},
        {std::string(".htx"),       "text/html"},
        {std::string(".ice"),       "x-conference/x-cooltalk"},
        {std::string(".ico"),       "image/x-icon"},
        {std::string(".idc"),       "text/plain"},
        {std::string(".ief"),       "image/ief"},
        {std::string(".iefs"),      "image/ief"},
        {std::string(".iges"),      "application/iges"},
        {std::string(".iges"),      "model/iges"},
        {std::string(".igs"),       "application/iges"},
        {std::string(".igs"),       "model/iges"},
        {std::string(".ima"),       "application/x-ima"},
        {std::string(".imap"),      "application/x-httpd-imap"},
        {std::string(".inf"),       "application/inf"},
        {std::string(".ins"),       "application/x-internett-signup"},
        {std::string(".ip"),        "application/x-ip2"},
        {std::string(".isu"),       "video/x-isvideo"},
        {std::string(".it"),        "audio/it"},
        {std::string(".iv"),        "application/x-inventor"},
        {std::string(".ivr"),       "i-world/i-vrml"},
        {std::string(".ivy"),       "application/x-livescreen"},
        {std::string(".jam"),       "audio/x-jam"},
        {std::string(".jav"),       "text/plain"},
        {std::string(".jav"),       "text/x-java-source"},
        {std::string(".java"),      "text/plain"},
        {std::string(".java"),      "text/x-java-source"},
        {std::string(".jcm"),       "application/x-java-commerce"},
        {std::string(".jfif"),      "image/jpeg"},
        {std::string(".jfif"),      "image/pjpeg"},
        {std::string(".jfif-tbnl"), "image/jpeg"},
        {std::string(".jpe"),       "image/jpeg"},
        {std::string(".jpe"),       "image/pjpeg"},
        {std::string(".jpeg"),      "image/jpeg"},
        {std::string(".jpeg"),      "image/pjpeg"},
        {std::string(".jpg"),       "image/jpeg"},
        {std::string(".jpg"),       "image/pjpeg"},
        {std::string(".jps"),       "image/x-jps"},
        {std::string(".js"),        "application/x-javascript"},
        {std::string(".js"),        "application/javascript"},
        {std::string(".js"),        "application/ecmascript"},
        {std::string(".js"),        "text/javascript"},
        {std::string(".js"),        "text/ecmascript"},
        {std::string(".json"),      "application/json"},
        {std::string(".jut"),       "image/jutvision"},
        {std::string(".kar"),       "audio/midi"},
        {std::string(".kar"),       "music/x-karaoke"},
        {std::string(".ksh"),       "application/x-ksh"},
        {std::string(".ksh"),       "text/x-script.ksh"},
        {std::string(".la"),        "audio/nspaudio"},
        {std::string(".la"),        "audio/x-nspaudio"},
        {std::string(".lam"),       "audio/x-liveaudio"},
        {std::string(".latex"),     "application/x-latex"},
        {std::string(".lha"),       "application/lha"},
        {std::string(".lha"),       "application/octet-stream"},
        {std::string(".lha"),       "application/x-lha"},
        {std::string(".lhx"),       "application/octet-stream"},
        {std::string(".list"),      "text/plain"},
        {std::string(".lma"),       "audio/nspaudio"},
        {std::string(".lma"),       "audio/x-nspaudio"},
        {std::string(".log"),       "text/plain"},
        {std::string(".lsp"),       "application/x-lisp"},
        {std::string(".lsp"),       "text/x-script.lisp"},
        {std::string(".lst"),       "text/plain"},
        {std::string(".lsx"),       "text/x-la-asf"},
        {std::string(".ltx"),       "application/x-latex"},
        {std::string(".lzh"),       "application/octet-stream"},
        {std::string(".lzh"),       "application/x-lzh"},
        {std::string(".lzx"),       "application/lzx"},
        {std::string(".lzx"),       "application/octet-stream"},
        {std::string(".lzx"),       "application/x-lzx"},
        {std::string(".m"),         "text/plain"},
        {std::string(".m"),         "text/x-m"},
        {std::string(".m1v"),       "video/mpeg"},
        {std::string(".m2a"),       "audio/mpeg"},
        {std::string(".m2v"),       "video/mpeg"},
        {std::string(".m3u"),       "audio/x-mpequrl"},
        {std::string(".man"),       "application/x-troff-man"},
        {std::string(".map"),       "application/x-navimap"},
        {std::string(".mar"),       "text/plain"},
        {std::string(".mbd"),       "application/mbedlet"},
        {std::string(".mc$"),       "application/x-magic-cap-package-1.0"},
        {std::string(".mcd"),       "application/mcad"},
        {std::string(".mcd"),       "application/x-mathcad"},
        {std::string(".mcf"),       "image/vasa"},
        {std::string(".mcf"),       "text/mcf"},
        {std::string(".mcp"),       "application/netmc"},
        {std::string(".me"),        "application/x-troff-me"},
        {std::string(".mht"),       "message/rfc822"},
        {std::string(".mhtml"),     "message/rfc822"},
        {std::string(".mid"),       "application/x-midi"},
        {std::string(".mid"),       "audio/midi"},
        {std::string(".mid"),       "audio/x-mid"},
        {std::string(".mid"),       "audio/x-midi"},
        {std::string(".mid"),       "music/crescendo"},
        {std::string(".mid"),       "x-music/x-midi"},
        {std::string(".midi"),      "application/x-midi"},
        {std::string(".midi"),      "audio/midi"},
        {std::string(".midi"),      "audio/x-mid"},
        {std::string(".midi"),      "audio/x-midi"},
        {std::string(".midi"),      "music/crescendo"},
        {std::string(".midi"),      "x-music/x-midi"},
        {std::string(".mif"),       "application/x-frame"},
        {std::string(".mif"),       "application/x-mif"},
        {std::string(".mime"),      "message/rfc822"},
        {std::string(".mime"),      "www/mime"},
        {std::string(".mjf"),       "audio/x-vnd.audioexplosion.mjuicemediafile"},
        {std::string(".mjpg"),      "video/x-motion-jpeg"},
        {std::string(".mm"),        "application/base64"},
        {std::string(".mm"),        "application/x-meme"},
        {std::string(".mme"),       "application/base64"},
        {std::string(".mod"),       "audio/mod"},
        {std::string(".mod"),       "audio/x-mod"},
        {std::string(".moov"),      "video/quicktime"},
        {std::string(".mov"),       "video/quicktime"},
        {std::string(".movie"),     "video/x-sgi-movie"},
        {std::string(".mp2"),       "audio/mpeg"},
        {std::string(".mp2"),       "audio/x-mpeg"},
        {std::string(".mp2"),       "video/mpeg"},
        {std::string(".mp2"),       "video/x-mpeg"},
        {std::string(".mp2"),       "video/x-mpeq2a"},
        {std::string(".mp3"),       "audio/mpeg3"},
        {std::string(".mp3"),       "audio/x-mpeg-3"},
        {std::string(".mp3"),       "video/mpeg"},
        {std::string(".mp3"),       "video/x-mpeg"},
        {std::string(".mpa"),       "audio/mpeg"},
        {std::string(".mpa"),       "video/mpeg"},
        {std::string(".mpc"),       "application/x-project"},
        {std::string(".mpe"),       "video/mpeg"},
        {std::string(".mpeg"),      "video/mpeg"},
        {std::string(".mpg"),       "audio/mpeg"},
        {std::string(".mpg"),       "video/mpeg"},
        {std::string(".mpga"),      "audio/mpeg"},
        {std::string(".mpp"),       "application/vnd.ms-project"},
        {std::string(".mpt"),       "application/x-project"},
        {std::string(".mpv"),       "application/x-project"},
        {std::string(".mpx"),       "application/x-project"},
        {std::string(".mrc"),       "application/marc"},
        {std::string(".ms"),        "application/x-troff-ms"},
        {std::string(".mv"),        "video/x-sgi-movie"},
        {std::string(".my"),        "audio/make"},
        {std::string(".mzz"),       "application/x-vnd.audioexplosion.mzz"},
        {std::string(".nap"),       "image/naplps"},
        {std::string(".naplps"),    "image/naplps"},
        {std::string(".nc"),        "application/x-netcdf"},
        {std::string(".ncm"),       "application/vnd.nokia.configuration-message"},
        {std::string(".nif"),       "image/x-niff"},
        {std::string(".niff"),      "image/x-niff"},
        {std::string(".nix"),       "application/x-mix-transfer"},
        {std::string(".nsc"),       "application/x-conference"},
        {std::string(".nvd"),       "application/x-navidoc"},
        {std::string(".o"),         "application/octet-stream"},
        {std::string(".oda"),       "application/oda"},
        {std::string(".omc"),       "application/x-omc"},
        {std::string(".omcd"),      "application/x-omcdatamaker"},
        {std::string(".omcr"),      "application/x-omcregerator"},
        {std::string(".p"),         "text/x-pascal"},
        {std::string(".p10"),       "application/pkcs10"},
        {std::string(".p10"),       "application/x-pkcs10"},
        {std::string(".p12"),       "application/pkcs-12"},
        {std::string(".p12"),       "application/x-pkcs12"},
        {std::string(".p7a"),       "application/x-pkcs7-signature"},
        {std::string(".p7c"),       "application/pkcs7-mime"},
        {std::string(".p7c"),       "application/x-pkcs7-mime"},
        {std::string(".p7m"),       "application/pkcs7-mime"},
        {std::string(".p7m"),       "application/x-pkcs7-mime"},
        {std::string(".p7r"),       "application/x-pkcs7-certreqresp"},
        {std::string(".p7s"),       "application/pkcs7-signature"},
        {std::string(".part"),      "application/pro_eng"},
        {std::string(".pas"),       "text/pascal"},
        {std::string(".pbm"),       "image/x-portable-bitmap"},
        {std::string(".pcl"),       "application/vnd.hp-pcl"},
        {std::string(".pcl"),       "application/x-pcl"},
        {std::string(".pct"),       "image/x-pict"},
        {std::string(".pcx"),       "image/x-pcx"},
        {std::string(".pdb"),       "chemical/x-pdb"},
        {std::string(".pdf"),       "application/pdf"},
        {std::string(".pfunk"),     "audio/make"},
        {std::string(".pfunk"),     "audio/make.my.funk"},
        {std::string(".pgm"),       "image/x-portable-graymap"},
        {std::string(".pgm"),       "image/x-portable-greymap"},
        {std::string(".pic"),       "image/pict"},
        {std::string(".pict"),      "image/pict"},
        {std::string(".pkg"),       "application/x-newton-compatible-pkg"},
        {std::string(".pko"),       "application/vnd.ms-pki.pko"},
        {std::string(".pl"),        "text/plain"},
        {std::string(".pl"),        "text/x-script.perl"},
        {std::string(".plx"),       "application/x-pixclscript"},
        {std::string(".pm"),        "image/x-xpixmap"},
        {std::string(".pm"),        "text/x-script.perl-module"},
        {std::string(".pm4"),       "application/x-pagemaker"},
        {std::string(".pm5"),       "application/x-pagemaker"},
        {std::string(".png"),       "image/png"},
        {std::string(".pnm"),       "application/x-portable-anymap"},
        {std::string(".pnm"),       "image/x-portable-anymap"},
        {std::string(".pot"),       "application/mspowerpoint"},
        {std::string(".pot"),       "application/vnd.ms-powerpoint"},
        {std::string(".pov"),       "model/x-pov"},
        {std::string(".ppa"),       "application/vnd.ms-powerpoint"},
        {std::string(".ppm"),       "image/x-portable-pixmap"},
        {std::string(".pps"),       "application/mspowerpoint"},
        {std::string(".pps"),       "application/vnd.ms-powerpoint"},
        {std::string(".ppt"),       "application/mspowerpoint"},
        {std::string(".ppt"),       "application/powerpoint"},
        {std::string(".ppt"),       "application/vnd.ms-powerpoint"},
        {std::string(".ppt"),       "application/x-mspowerpoint"},
        {std::string(".ppz"),       "application/mspowerpoint"},
        {std::string(".pre"),       "application/x-freelance"},
        {std::string(".prt"),       "application/pro_eng"},
        {std::string(".ps"),        "application/postscript"},
        {std::string(".psd"),       "application/octet-stream"},
        {std::string(".pvu"),       "paleovu/x-pv"},
        {std::string(".pwz"),       "application/vnd.ms-powerpoint"},
        {std::string(".py"),        "text/x-script.phyton"},
        {std::string(".pyc"),       "application/x-bytecode.python"},
        {std::string(".qcp"),       "audio/vnd.qcelp"},
        {std::string(".qd3"),       "x-world/x-3dmf"},
        {std::string(".qd3d"),      "x-world/x-3dmf"},
        {std::string(".qif"),       "image/x-quicktime"},
        {std::string(".qt"),        "video/quicktime"},
        {std::string(".qtc"),       "video/x-qtc"},
        {std::string(".qti"),       "image/x-quicktime"},
        {std::string(".qtif"),      "image/x-quicktime"},
        {std::string(".ra"),        "audio/x-pn-realaudio"},
        {std::string(".ra"),        "audio/x-pn-realaudio-plugin"},
        {std::string(".ra"),        "audio/x-realaudio"},
        {std::string(".ram"),       "audio/x-pn-realaudio"},
        {std::string(".ras"),       "application/x-cmu-raster"},
        {std::string(".ras"),       "image/cmu-raster"},
        {std::string(".ras"),       "image/x-cmu-raster"},
        {std::string(".rast"),      "image/cmu-raster"},
        {std::string(".rexx"),      "text/x-script.rexx"},
        {std::string(".rf"),        "image/vnd.rn-realflash"},
        {std::string(".rgb"),       "image/x-rgb"},
        {std::string(".rm"),        "application/vnd.rn-realmedia"},
        {std::string(".rm"),        "audio/x-pn-realaudio"},
        {std::string(".rmi"),       "audio/mid"},
        {std::string(".rmm"),       "audio/x-pn-realaudio"},
        {std::string(".rmp"),       "audio/x-pn-realaudio"},
        {std::string(".rmp"),       "audio/x-pn-realaudio-plugin"},
        {std::string(".rng"),       "application/ringing-tones"},
        {std::string(".rng"),       "application/vnd.nokia.ringing-tone"},
        {std::string(".rnx"),       "application/vnd.rn-realplayer"},
        {std::string(".roff"),      "application/x-troff"},
        {std::string(".rp"),        "image/vnd.rn-realpix"},
        {std::string(".rpm"),       "audio/x-pn-realaudio-plugin"},
        {std::string(".rt"),        "text/richtext"},
        {std::string(".rt"),        "text/vnd.rn-realtext"},
        {std::string(".rtf"),       "application/rtf"},
        {std::string(".rtf"),       "application/x-rtf"},
        {std::string(".rtf"),       "text/richtext"},
        {std::string(".rtx"),       "application/rtf"},
        {std::string(".rtx"),       "text/richtext"},
        {std::string(".rv"),        "video/vnd.rn-realvideo"},
        {std::string(".s"),         "text/x-asm"},
        {std::string(".s3m"),       "audio/s3m"},
        {std::string(".saveme"),    "application/octet-stream"},
        {std::string(".sbk"),       "application/x-tbook"},
        {std::string(".scm"),       "application/x-lotusscreencam"},
        {std::string(".scm"),       "text/x-script.guile"},
        {std::string(".scm"),       "text/x-script.scheme"},
        {std::string(".scm"),       "video/x-scm"},
        {std::string(".sdml"),      "text/plain"},
        {std::string(".sdp"),       "application/sdp"},
        {std::string(".sdp"),       "application/x-sdp"},
        {std::string(".sdr"),       "application/sounder"},
        {std::string(".sea"),       "application/sea"},
        {std::string(".sea"),       "application/x-sea"},
        {std::string(".set"),       "application/set"},
        {std::string(".sgm"),       "text/sgml"},
        {std::string(".sgm"),       "text/x-sgml"},
        {std::string(".sgml"),      "text/sgml"},
        {std::string(".sgml"),      "text/x-sgml"},
        {std::string(".sh"),        "application/x-bsh"},
        {std::string(".sh"),        "application/x-sh"},
        {std::string(".sh"),        "application/x-shar"},
        {std::string(".sh"),        "text/x-script.sh"},
        {std::string(".shar"),      "application/x-bsh"},
        {std::string(".shar"),      "application/x-shar"},
        {std::string(".shtml"),     "text/html"},
        {std::string(".shtml"),     "text/x-server-parsed-html"},
        {std::string(".sid"),       "audio/x-psid"},
        {std::string(".sit"),       "application/x-sit"},
        {std::string(".sit"),       "application/x-stuffit"},
        {std::string(".skd"),       "application/x-koan"},
        {std::string(".skm"),       "application/x-koan"},
        {std::string(".skp"),       "application/x-koan"},
        {std::string(".skt"),       "application/x-koan"},
        {std::string(".sl"),        "application/x-seelogo"},
        {std::string(".smi"),       "application/smil"},
        {std::string(".smil"),      "application/smil"},
        {std::string(".snd"),       "audio/basic"},
        {std::string(".snd"),       "audio/x-adpcm"},
        {std::string(".sol"),       "application/solids"},
        {std::string(".spc"),       "application/x-pkcs7-certificates"},
        {std::string(".spc"),       "text/x-speech"},
        {std::string(".spl"),       "application/futuresplash"},
        {std::string(".spr"),       "application/x-sprite"},
        {std::string(".sprite"),    "application/x-sprite"},
        {std::string(".src"),       "application/x-wais-source"},
        {std::string(".ssi"),       "text/x-server-parsed-html"},
        {std::string(".ssm"),       "application/streamingmedia"},
        {std::string(".sst"),       "application/vnd.ms-pki.certstore"},
        {std::string(".step"),      "application/step"},
        {std::string(".stl"),       "application/sla"},
        {std::string(".stl"),       "application/vnd.ms-pki.stl"},
        {std::string(".stl"),       "application/x-navistyle"},
        {std::string(".stp"),       "application/step"},
        {std::string(".sv4cpio"),   "application/x-sv4cpio"},
        {std::string(".sv4crc"),    "application/x-sv4crc"},
        {std::string(".svf"),       "image/vnd.dwg"},
        {std::string(".svf"),       "image/x-dwg"},
        {std::string(".svg"),       "image/svg+xml"},
        {std::string(".svr"),       "application/x-world"},
        {std::string(".svr"),       "x-world/x-svr"},
        {std::string(".swf"),       "application/x-shockwave-flash"},
        {std::string(".t"),         "application/x-troff"},
        {std::string(".talk"),      "text/x-speech"},
        {std::string(".tar"),       "application/x-tar"},
        {std::string(".tbk"),       "application/toolbook"},
        {std::string(".tbk"),       "application/x-tbook"},
        {std::string(".tcl"),       "application/x-tcl"},
        {std::string(".tcl"),       "text/x-script.tcl"},
        {std::string(".tcsh"),      "text/x-script.tcsh"},
        {std::string(".tex"),       "application/x-tex"},
        {std::string(".texi"),      "application/x-texinfo"},
        {std::string(".texinfo"),   "application/x-texinfo"},
        {std::string(".text"),      "application/plain"},
        {std::string(".text"),      "text/plain"},
        {std::string(".tgz"),       "application/gnutar"},
        {std::string(".tgz"),       "application/x-compressed"},
        {std::string(".tif"),       "image/tiff"},
        {std::string(".tif"),       "image/x-tiff"},
        {std::string(".tiff"),      "image/tiff"},
        {std::string(".tiff"),      "image/x-tiff"},
        {std::string(".tr"),        "application/x-troff"},
        {std::string(".tsi"),       "audio/tsp-audio"},
        {std::string(".tsp"),       "application/dsptype"},
        {std::string(".tsp"),       "audio/tsplayer"},
        {std::string(".tsv"),       "text/tab-separated-values"},
        {std::string(".turbot"),    "image/florian"},
        {std::string(".txt"),       "text/plain"},
        {std::string(".uil"),       "text/x-uil"},
        {std::string(".uni"),       "text/uri-list"},
        {std::string(".unis"),      "text/uri-list"},
        {std::string(".unv"),       "application/i-deas"},
        {std::string(".uri"),       "text/uri-list"},
        {std::string(".uris"),      "text/uri-list"},
        {std::string(".ustar"),     "application/x-ustar"},
        {std::string(".ustar"),     "multipart/x-ustar"},
        {std::string(".uu"),        "application/octet-stream"},
        {std::string(".uu"),        "text/x-uuencode"},
        {std::string(".uue"),       "text/x-uuencode"},
        {std::string(".vcd"),       "application/x-cdlink"},
        {std::string(".vcs"),       "text/x-vcalendar"},
        {std::string(".vda"),       "application/vda"},
        {std::string(".vdo"),       "video/vdo"},
        {std::string(".vew"),       "application/groupwise"},
        {std::string(".viv"),       "video/vivo"},
        {std::string(".viv"),       "video/vnd.vivo"},
        {std::string(".vivo"),      "video/vivo"},
        {std::string(".vivo"),      "video/vnd.vivo"},
        {std::string(".vmd"),       "application/vocaltec-media-desc"},
        {std::string(".vmf"),       "application/vocaltec-media-file"},
        {std::string(".voc"),       "audio/voc"},
        {std::string(".voc"),       "audio/x-voc"},
        {std::string(".vos"),       "video/vosaic"},
        {std::string(".vox"),       "audio/voxware"},
        {std::string(".vqe"),       "audio/x-twinvq-plugin"},
        {std::string(".vqf"),       "audio/x-twinvq"},
        {std::string(".vql"),       "audio/x-twinvq-plugin"},
        {std::string(".vrml"),      "application/x-vrml"},
        {std::string(".vrml"),      "model/vrml"},
        {std::string(".vrml"),      "x-world/x-vrml"},
        {std::string(".vrt"),       "x-world/x-vrt"},
        {std::string(".vsd"),       "application/x-visio"},
        {std::string(".vst"),       "application/x-visio"},
        {std::string(".vsw"),       "application/x-visio"},
        {std::string(".w60"),       "application/wordperfect6.0"},
        {std::string(".w61"),       "application/wordperfect6.1"},
        {std::string(".w6w"),       "application/msword"},
        {std::string(".wav"),       "audio/wav"},
        {std::string(".wav"),       "audio/x-wav"},
        {std::string(".wb1"),       "application/x-qpro"},
        {std::string(".wbmp"),      "image/vnd.wap.wbmp"},
        {std::string(".web"),       "application/vnd.xara"},
        {std::string(".wiz"),       "application/msword"},
        {std::string(".wk1"),       "application/x-123"},
        {std::string(".wmf"),       "windows/metafile"},
        {std::string(".wml"),       "text/vnd.wap.wml"},
        {std::string(".wmlc"),      "application/vnd.wap.wmlc"},
        {std::string(".wmls"),      "text/vnd.wap.wmlscript"},
        {std::string(".wmlsc"),     "application/vnd.wap.wmlscriptc"},
        {std::string(".word"),      "application/msword"},
        {std::string(".wp"),        "application/wordperfect"},
        {std::string(".wp5"),       "application/wordperfect"},
        {std::string(".wp5"),       "application/wordperfect6.0"},
        {std::string(".wp6"),       "application/wordperfect"},
        {std::string(".wpd"),       "application/wordperfect"},
        {std::string(".wpd"),       "application/x-wpwin"},
        {std::string(".wq1"),       "application/x-lotus"},
        {std::string(".wri"),       "application/mswrite"},
        {std::string(".wri"),       "application/x-wri"},
        {std::string(".wrl"),       "application/x-world"},
        {std::string(".wrl"),       "model/vrml"},
        {std::string(".wrl"),       "x-world/x-vrml"},
        {std::string(".wrz"),       "model/vrml"},
        {std::string(".wrz"),       "x-world/x-vrml"},
        {std::string(".wsc"),       "text/scriplet"},
        {std::string(".wsrc"),      "application/x-wais-source"},
        {std::string(".wtk"),       "application/x-wintalk"},
        {std::string(".xbm"),       "image/x-xbitmap"},
        {std::string(".xbm"),       "image/x-xbm"},
        {std::string(".xbm"),       "image/xbm"},
        {std::string(".xdr"),       "video/x-amt-demorun"},
        {std::string(".xgz"),       "xgl/drawing"},
        {std::string(".xif"),       "image/vnd.xiff"},
        {std::string(".xl"),        "application/excel"},
        {std::string(".xla"),       "application/excel"},
        {std::string(".xla"),       "application/x-excel"},
        {std::string(".xla"),       "application/x-msexcel"},
        {std::string(".xlb"),       "application/excel"},
        {std::string(".xlb"),       "application/vnd.ms-excel"},
        {std::string(".xlb"),       "application/x-excel"},
        {std::string(".xlc"),       "application/excel"},
        {std::string(".xlc"),       "application/vnd.ms-excel"},
        {std::string(".xlc"),       "application/x-excel"},
        {std::string(".xld"),       "application/excel"},
        {std::string(".xld"),       "application/x-excel"},
        {std::string(".xlk"),       "application/excel"},
        {std::string(".xlk"),       "application/x-excel"},
        {std::string(".xll"),       "application/excel"},
        {std::string(".xll"),       "application/vnd.ms-excel"},
        {std::string(".xll"),       "application/x-excel"},
        {std::string(".xlm"),       "application/excel"},
        {std::string(".xlm"),       "application/vnd.ms-excel"},
        {std::string(".xlm"),       "application/x-excel"},
        {std::string(".xls"),       "application/excel"},
        {std::string(".xls"),       "application/vnd.ms-excel"},
        {std::string(".xls"),       "application/x-excel"},
        {std::string(".xls"),       "application/x-msexcel"},
        {std::string(".xlt"),       "application/excel"},
        {std::string(".xlt"),       "application/x-excel"},
        {std::string(".xlv"),       "application/excel"},
        {std::string(".xlv"),       "application/x-excel"},
        {std::string(".xlw"),       "application/excel"},
        {std::string(".xlw"),       "application/vnd.ms-excel"},
        {std::string(".xlw"),       "application/x-excel"},
        {std::string(".xlw"),       "application/x-msexcel"},
        {std::string(".xm"),        "audio/xm"},
        {std::string(".xml"),       "application/xml"},
        {std::string(".xml"),       "text/xml"},
        {std::string(".xmz"),       "xgl/movie"},
        {std::string(".xpix"),      "application/x-vnd.ls-xpix"},
        {std::string(".xpm"),       "image/x-xpixmap"},
        {std::string(".xpm"),       "image/xpm"},
        {std::string(".x-png"),     "image/png"},
        {std::string(".xsr"),       "video/x-amt-showrun"},
        {std::string(".xwd"),       "image/x-xwd"},
        {std::string(".xwd"),       "image/x-xwindowdump"},
        {std::string(".xyz"),       "chemical/x-pdb"},
        {std::string(".z"),         "application/x-compress"},
        {std::string(".z"),         "application/x-compressed"},
        {std::string(".zip"),       "application/x-compressed"},
        {std::string(".zip"),       "application/x-zip-compressed"},
        {std::string(".zip"),       "application/zip"},
        {std::string(".zip"),       "multipart/x-zip"},
        {std::string(".zoo"),       "application/octet-stream"},
        {std::string(".zsh"),       "text/x-script.zsh"}
};
