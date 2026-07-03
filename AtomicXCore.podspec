Pod::Spec.new do |s|
  s.name             = 'AtomicXCore'
  s.version          = '3.7.0.418'
  s.summary          = 'AtomicXCore SDK (mirror for uni-app uts plugin)'
  s.description      = 'Binary mirror of AtomicXCore.xcframework for consumption via uni-app uts plugin dependencies-pods repo config. Not a redistribution.'
  s.homepage         = 'https://github.com/masonqiaoA/ios_pod'
  s.license          = { :type => 'Proprietary', :text => 'For internal/debug use only. Original SDK © Tencent.' }
  s.author           = { 'masonqiao' => 'mason@example.com' }
  s.source           = { :git => 'https://github.com/masonqiaoA/ios_pod.git', :tag => s.version.to_s }
  s.platform         = :ios, '13.0'
  s.vendored_frameworks = 'Frameworks/AtomicXCore.xcframework'
  s.requires_arc     = true
end
