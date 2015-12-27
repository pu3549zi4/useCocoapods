－－－－－－－－－－－－－－下面是安装－－－－－－－－－－－－－－－－－－－
Last login: Sat Oct 24 19:55:37 on ttys001
apple:~ apple$ sudo gem install cocoapods
Password:
Sorry, try again.
Password:
Sorry, try again.
Password:
ERROR:  Could not find a valid gem 'cocoapods' (>= 0) in any repository
apple:~ apple$ gem sources -a http://ruby.taobao.org/
Error fetching http://ruby.taobao.org/:
bad response Not Found 404 (http://ruby.taobao.org/specs.4.8.gz)
                            apple:~ apple$ gem sources -a https://ruby.taobao.org/
                            https://ruby.taobao.org/ added to sources
                            apple:~ apple$ sudo gem install cocoapods
                            ERROR:  While executing gem ... (Errno::EPERM)
                            Operation not permitted - /usr/bin/xcodeproj
                            apple:~ apple$ mkdir -p $HOME/Software/ruby
                            apple:~ apple$ export GEM_HOME=$HOME/Software/ruby
                            apple:~ apple$ gem install cocoapods
                            Fetching: xcodeproj-0.28.2.gem (100%)
                            Successfully installed xcodeproj-0.28.2
                            Fetching: cocoapods-core-0.39.0.gem (100%)
                            Successfully installed cocoapods-core-0.39.0
                            Fetching: cocoapods-0.39.0.gem (100%)
                            Successfully installed cocoapods-0.39.0
                            Parsing documentation for xcodeproj-0.28.2
                            Installing ri documentation for xcodeproj-0.28.2
                            Parsing documentation for cocoapods-core-0.39.0
                            Installing ri documentation for cocoapods-core-0.39.0
                            Parsing documentation for cocoapods-0.39.0
                            Installing ri documentation for cocoapods-0.39.0
                            3 gems installed
                            apple:~ apple$ export PATH=$PATH:$HOME/Sofware/ruby/bin
                            apple:~ apple$ pod --version
                            -bash: pod: command not found
                            apple:~ apple$ pod search AFNetworking
                            -bash: pod: command not found
                            apple:~ apple$ pod search AFNetworking
                            -bash: pod: command not found
                            apple:~ apple$ sudo gem install -n /usr/local/bin cocoapods
                            Password:
                            Successfully installed xcodeproj-0.28.2
                            Fetching: cocoapods-core-0.39.0.gem (100%)
                            Successfully installed cocoapods-core-0.39.0
                            Fetching: cocoapods-0.39.0.gem (100%)
                            Successfully installed cocoapods-0.39.0
                            Parsing documentation for xcodeproj-0.28.2
                            Installing ri documentation for xcodeproj-0.28.2
                            Parsing documentation for cocoapods-core-0.39.0
                            Installing ri documentation for cocoapods-core-0.39.0
                            Parsing documentation for cocoapods-0.39.0
                            Installing ri documentation for cocoapods-0.39.0
                            3 gems installed
                            apple:~ apple$ pod --version
                            0.39.0
                            apple:~ apple$ pod search AFNetworking
                            
                            
                            -> AFNetworking (2.6.0)
                            A delightful iOS and OS X networking framework.
                            pod 'AFNetworking', '~> 2.6.0'
                            - Homepage: https://github.com/AFNetworking/AFNetworking
                            - Source:   https://github.com/AFNetworking/AFNetworking.git
                            - Versions: 2.6.0, 2.5.4, 2.5.3, 2.5.2, 2.5.1, 2.5.0, 2.4.1, 2.4.0, 2.3.1,
                            2.3.0, 2.2.4, 2.2.3, 2.2.2, 2.2.1, 2.2.0, 2.1.0, 2.0.3, 2.0.2, 2.0.1, 2.0.0,
                            2.0.0-RC3, 2.0.0-RC2, 2.0.0-RC1, 1.3.4, 1.3.3, 1.3.2, 1.3.1, 1.3.0, 1.2.1,
                            1.2.0, 1.1.0, 1.0.1, 1.0, 1.0RC3, 1.0RC2, 1.0RC1, 0.10.1, 0.10.0, 0.9.2,
                            0.9.1, 0.9.0, 0.7.0, 0.5.1 [master repo]
                            - Subspecs:
                            - AFNetworking/Serialization (2.6.0)
                            - AFNetworking/Security (2.6.0)
                            - AFNetworking/Reachability (2.6.0)
                            - AFNetworking/NSURLConnection (2.6.0)
                            - AFNetworking/NSURLSession (2.6.0)
                            - AFNetworking/UIKit (2.6.0)
                            
                            
                            -> AFNetworking+AutoRetry (0.0.5)
                            Auto Retries for AFNetworking requests
                            pod 'AFNetworking+AutoRetry', '~> 0.0.5'
                            - Homepage: https://github.com/shaioz/AFNetworking-AutoRetry
                            - Source:   https://github.com/shaioz/AFNetworking-AutoRetry.git
                            - Versions: 0.0.5, 0.0.4, 0.0.3, 0.0.2, 0.0.1 [master repo]
                            
                            
                            -> AFNetworking+Ext (1.2.1)
                            AFNetworking的封装, 并提供一个 UIImageView+DYLoading  cache in fileSystem+memory
                            pod 'AFNetworking+Ext', '~> 1.2.1'
                            - Homepage: https://github.com/junhaiyang/AFNetworkingExt
                            - Source:   https://github.com/junhaiyang/AFNetworkingExt.git
                            - Versions: 1.2.1, 1.2, 1.1, 1.0, 0.5, 0.4, 0.3 [master repo]
                            - Subspecs:
                            - AFNetworking+Ext/Base (1.2.1)
                            - AFNetworking+Ext/AFCustomRequestOperation (1.2.1)
                            - AFNetworking+Ext/AFDownloadRequestOperation (1.2.1)
                            - AFNetworking+Ext/AFTextResponseSerializer (1.2.1)
                            - AFNetworking+Ext/example (1.2.1)
                            - AFNetworking+Ext/UIKit (1.2.1)
                            - AFNetworking+Ext/UIKit/UIImageView+DYLoading (1.2.1)
                            
                            
                            -> AFNetworking+ImageActivityIndicator (1.0.1)
                            AFNetworking+ImageActivityIndicator makes it easy to show an activity
                            indicator while an image view's image is loading using AFNetworking.
                            pod 'AFNetworking+ImageActivityIndicator', '~> 1.0.1'
                            - Homepage:
                            https://github.com/JRG-Developer/AFNetworking-ImageActivityIndicator
                            - Source:
                            https://github.com/JRG-Developer/AFNetworking-ImageActivityIndicator.git
                            - Versions: 1.0.1, 1.0.0 [master repo]
                            
                            
                            -> AFNetworking+SingleBlock (0.0.1)
                            Categories that aggregate the success and failure block in one single
                            solution
                            pod 'AFNetworking+SingleBlock', '~> 0.0.1'
                            - Homepage: https://github.com/acerbetti/AFNetworking-SingleBlock
                            - Source:   https://github.com/acerbetti/AFNetworking-SingleBlock.git
                            - Versions: 0.0.1 [master repo]
                            
                            
                            -> AFNetworking+streaming (0.6.2)
                            A very quick extension to AFNetworking that adds stream based parsing
                            pod 'AFNetworking+streaming', '~> 0.6.2'
                            - Homepage: https://github.com/deanWombourne/AFNetworking-streaming
                            - Source:   https://github.com/deanWombourne/AFNetworking-streaming.git
                            - Versions: 0.6.2, 0.6.1, 0.6, 0.5, 0.4, 0.3, 0.2, 0.1 [master repo]
                            - Subspecs:
                            - AFNetworking+streaming/Core (0.6.2)
                            - AFNetworking+streaming/Json (0.6.2)
                            
                            
                            -> AFNetworking-MUResponseSerializer (1.0.1)
                            Automatically serialize JSON response to your object model. It also works
                            with NSManagedObjects
                            pod 'AFNetworking-MUResponseSerializer', '~> 1.0.1'
                            - Homepage: https://github.com/Ulianko/AFNetworking-MUResponseSerializer
                            - Source:   https://github.com/Ulianko/AFNetworking-MUResponseSerializer.git
                            - Versions: 1.0.1, 1.0.0 [master repo]
                            
                            
                            -> AFNetworking-PromiseKit (0.2.4)
                            AFNetworking category for PromiseKit
                            pod 'AFNetworking-PromiseKit', '~> 0.2.4'
                            - Homepage: https://github.com/cmckni3/AFNetworking-PromiseKit
                            - Source:   https://github.com/cmckni3/AFNetworking-PromiseKit.git
                            - Versions: 0.2.4, 0.2.3, 0.2.2, 0.2.1, 0.2.0, 0.1.0 [master repo]
                            
                            
                            -> AFNetworking-RACExtensions (0.1.8)
                            AFNetworking-RACExtensions is a delightful extension to the AFNetworking
                            classes for iOS and Mac OS X.
                            pod 'AFNetworking-RACExtensions', '~> 0.1.8'
                            - Homepage: https://github.com/CodaFi/AFNetworking-RACExtensions
                            - Source:   https://github.com/CodaFi/AFNetworking-RACExtensions.git
                            - Versions: 0.1.8, 0.1.6, 0.1.4, 0.1.2, 0.1.1, 0.0.1 [master repo]
                            
                            
                            -> AFNetworking-RACRetryExtensions (0.2.0)
                            AFNetworking-RACRetryExtensions is an extension to the AFNetworking classes
                            for iOS and Mac OS X that adds the auto-retry ability.
                            pod 'AFNetworking-RACRetryExtensions', '~> 0.2.0'
                            - Homepage: https://github.com/legoless/AFNetworking-RACRetryExtensions
                            - Source:   https://github.com/legoless/AFNetworking-RACRetryExtensions.git
                            - Versions: 0.2.0, 0.1.2, 0.1.1 [master repo]
                            
                            
                            -> AFNetworking-ReactiveCocoa (0.0.2)
                            Make AFNetworking reactive.
                            pod 'AFNetworking-ReactiveCocoa', '~> 0.0.2'
                            - Homepage: https://github.com/uasi/AFNetworking-ReactiveCocoa
                            - Source:   https://github.com/uasi/AFNetworking-ReactiveCocoa.git
                            - Versions: 0.0.2, 0.0.1 [master repo]
                            
                            
                            -> AFNetworking-Synchronous (0.3.1)
                            Synchronous requests for AFNetworking
                            pod 'AFNetworking-Synchronous', '~> 0.3.1'
                            - Homepage: https://github.com/paulmelnikow/AFNetworking-Synchronous
                            - Source:   https://github.com/paulmelnikow/AFNetworking-Synchronous.git
                            - Versions: 0.3.1, 0.3.0, 0.2.0, 0.1.0 [master repo]
                            - Subspecs:
                            - AFNetworking-Synchronous/1.x (0.3.1)
                            - AFNetworking-Synchronous/2.x (0.3.1)
                            
                            
                            -> AFNetworking-Webp (0.2)
                            A Webp image response serializer for AFNetworking 2.0
                            pod 'AFNetworking-Webp', '~> 0.2'
                            - Homepage: https://github.com/brandons/AFNetworking-Webp
                            - Source:   https://github.com/brandons/AFNetworking-Webp.git
                            - Versions: 0.2, 0.1 [master repo]
                            
                            
                            -> AFNetworking2-RACExtensions (0.0.1)
                            AFNetworking-RACExtensions is a delightful extension to the AFNetworking
                            classes for iOS and Mac OS X.
                            pod 'AFNetworking2-RACExtensions', '~> 0.0.1'
                            - Homepage: https://github.com/knshiro/AFNetworking-RACExtensions
                            - Source:   https://github.com/knshiro/AFNetworking-RACExtensions.git
                            - Versions: 0.0.1 [master repo]
                            
                            
                            -> AFNetworkingHelper (0.1.4)
                            A short wrapper written over AFNetworking library.
                            pod 'AFNetworkingHelper', '~> 0.1.4'
                            - Homepage: https://github.com/RainingClouds/AFNetworkingHelper
                            - Source:   https://github.com/RainingClouds/AFNetworkingHelper.git
                            - Versions: 0.1.4, 0.1.3, 0.1.2, 0.1.1, 0.1.0 [master repo]
                            
                            
                            -> CollectionUtils-AFNetworking (1.0.1)
                            CollectionUtils additions for AFNetworking.
                            pod 'CollectionUtils-AFNetworking', '~> 1.0.1'
                            - Homepage: https://github.com/kishikawakatsumi/CollectionUtils
                            - Source:   https://github.com/kishikawakatsumi/CollectionUtils.git
                            - Versions: 1.0.1, 1.0.0 [master repo]
                            
                            
                            -> CollectionUtils-AFNetworking-1.3 (1.0.1)
                            CollectionUtils additions for AFNetworking 1.3.x.
                            pod 'CollectionUtils-AFNetworking-1.3', '~> 1.0.1'
                            - Homepage: https://github.com/kishikawakatsumi/CollectionUtils
                            - Source:   https://github.com/kishikawakatsumi/CollectionUtils.git
                            - Versions: 1.0.1, 1.0.0 [master repo]
                            
                            
                            -> HYVConfiguratorAFNetworking-Mantle (0.4.1)
                            Configurator for using AFNetworking with Mantle
                            pod 'HYVConfiguratorAFNetworking-Mantle', '~> 0.4.1'
                            - Homepage:
                            https://github.com/LilushFess/HYVConfiguratorAFNetworking-Mantle.git
                            - Source:  
                            https://github.com/LilushFess/HYVConfiguratorAFNetworking-Mantle.git
                            - Versions: 0.4.1, 0.4, 0.3.1, 0.3.0, 0.2.1, 0.2.0, 0.1.4, 0.1.3.2, 0.1.3.1,
                            0.1.3, 0.1.2.2, 0.1.2, 0.1.1.42, 0.1.0 [master repo]
                            
                            
                            -> Haneke+AFNetworking (0.2.0)
                            Haneke extension to use AFNetworking to download images.
                            pod 'Haneke+AFNetworking', '~> 0.2.0'
                            - Homepage: https://github.com/Haneke/Haneke-AFNetworking
                            - Source:   https://github.com/Haneke/Haneke-AFNetworking.git
                            - Versions: 0.2.0 [master repo]
                            
                            
                            -> PromiseKit-AFNetworking (0.5.1)
                            PromiseKit extensions for AFNetworking
                            pod 'PromiseKit-AFNetworking', '~> 0.5.1'
                            - Homepage: https://github.com/csotiriou/AFNetworking-PromiseKit/
                            - Source:   https://github.com/csotiriou/AFNetworking-PromiseKit.git
                            - Versions: 0.5.1, 0.5.0, 0.1.7, 0.1.6, 0.1.5, 0.1.4, 0.1.3, 0.1.2, 0.1.1
                            [master repo]
                            
                            
                            -> UIImageView_AFNetworking-Blocks (0.1.0)
                            UIImageView+AFNetworking with a single completion block for success and
                            failure.
                            pod 'UIImageView_AFNetworking-Blocks', '~> 0.1.0'
                            - Homepage: https://github.com/pixio/UIImageView_AFNetworking-Blocks
                            - Source:   https://github.com/pixio/UIImageView_AFNetworking-Blocks.git
                            - Versions: 0.1.0 [master repo]
                            apple:~ apple$ 
                            －－－－－－－－－－－－－－下面是使用－－－－－－－－－－－－－－－－－－－
                            apple:~ apple$ cd
                            apple:~ apple$ cd Desktop
                            apple:Desktop apple$ cd UserGuide-master 2
                            apple:UserGuide-master apple$ pod install
                            [!] No `Podfile' found in the project directory.
                            apple:UserGuide-master apple$ touch Podfile
                            apple:UserGuide-master apple$ pod install
                            Updating local specs repositories
                            Analyzing dependencies
                            Downloading dependencies
                            Generating Pods project
                            Integrating client project
                            
                            [!] Please close any current Xcode sessions and use `UserGuide.xcworkspace` for this project from now on.
                            Sending stats
                            Pod installation complete! There are 0 dependencies from the Podfile and 0 total pods
                            installed.
                            
                            [!] [!] The Podfile does not contain any dependencies.
                            apple:UserGuide-master apple$ 
                            —————————————————————
                            gem install cocoapods  升级本地cocoapods版本
                            
