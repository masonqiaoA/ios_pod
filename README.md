# ios_pod

iOS SDK binary mirror for uni-app uts plugin (debug only).

## Contents

- `AtomicXCore.xcframework` — version `3.7.0.420`
- `RTCRoomEngine.xcframework` — version `3.7.0.420`

Both store under `Frameworks/`. Each is a complete xcframework (device + simulator slices).

## Usage in uni-app uts plugin

In `utssdk/app-ios/config.json`:

```json
{
  "dependencies-pods": [
    {
      "name": "AtomicXCore",
      "repo": {
        "git": "https://github.com/masonqiaoA/ios_pod.git",
        "tag": "3.7.0.420"
      }
    },
    {
      "name": "RTCRoomEngine",
      "repo": {
        "git": "https://github.com/masonqiaoA/ios_pod.git",
        "tag": "3.7.0.420"
      }
    }
  ]
}
```

Requires HBuilderX 3.8.10+.

## Notes

- This repo uses Git LFS for the xcframework binaries.
- For debug/internal use only. Original SDK © Tencent. Not a redistribution.
- Tag the same version on this repo when bumping SDK; update `s.version` in both `.podspec`.
