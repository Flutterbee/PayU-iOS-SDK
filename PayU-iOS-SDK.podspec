
Pod::Spec.new do |s|
  s.name         = "PayU-iOS-SDK"
  s.version      = "2.2.2"
  s.summary      = "PayUMoney SDK"
  s.description  = "PayUMoney SDK"
  s.homepage     = "https://github.com/Flutterbee/PayU-iOS-SDK"
  # s.license      = { :type => "MIT", :file => "FILE_LICENSE" }
  s.author             = { "pavangoyal" => "" }
  s.platform     = :ios, "6.0"
  s.source       = { :git => "https://github.com/Flutterbee/PayU-iOS-SDK.git", :tag => "tny_v#{s.version}" }
  s.source_files  = "Classes", "PayU_iOS_SDK/**/*.{h,m}"
  s.resources = [ "PayU_iOS_SDK/Resources/*.png", "PayU_iOS_SDK/*.xib", "PayU_iOS_SDK/View Controller/*.xib", "PayU_iOS_SDK/PayU Activity Indicator/*.xib", "PayU_iOS_SDK/PayU Activity Indicator/Artworks/*.png" ]
end
