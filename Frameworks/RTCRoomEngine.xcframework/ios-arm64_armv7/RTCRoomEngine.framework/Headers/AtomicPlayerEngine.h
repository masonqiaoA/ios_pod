// Copyright (c) 2026 Tencent. All rights reserved.
// Author: AtomicXCore Player

#import <UIKit/UIKit.h>
#import "AtomicPlayerObserver.h"
#import "AtomicPlayerDefine.h"
#import "TUICommonDefine.h"
#import "TUIEngineSymbolExport.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Atomic player engine interface.
 */
TUIENGINE_EXPORT @interface AtomicPlayerEngine : NSObject

/**
 * Set the player event observer.
 *
 * @param observer The observer to receive player events.
 */
- (void)setObserver:(nullable id<AtomicPlayerObserver>)observer
    NS_SWIFT_NAME(setObserver(_:));

/**
 * Set the view for video rendering.
 *
 * @param view The view to render video into.
 * @return 0 on success, negative value on failure.
 */
- (int)setRenderView:(UIView *)view
    NS_SWIFT_NAME(setRenderView(_:));

/**
 * Set the video render rotation.
 *
 * @param rotation The rotation angle.
 * @return 0 on success, negative value on failure.
 */
- (int)setRenderRotation:(TUIVideoRenderParamsRotation)rotation
    NS_SWIFT_NAME(setRenderRotation(_:));

/**
 * Set the video render fill mode.
 *
 * @param fillMode The fill mode.
 * @return 0 on success, negative value on failure.
 */
- (int)setRenderFillMode:(TUIVideoRenderParamsFillMode)fillMode
    NS_SWIFT_NAME(setRenderFillMode(_:));

/**
 * Take a snapshot of the current video frame.
 *
 * @return 0 on success, negative value on failure.
 */
- (int)snapshot NS_SWIFT_NAME(snapshot());

/**
 * Set the playback volume.
 *
 * @param volume Volume level, range 0-100.
 * @return 0 on success, negative value on failure.
 */
- (int)setVolume:(int)volume
    NS_SWIFT_NAME(setVolume(_:));

/**
 * Start playing the stream at the given URL.
 *
 * @param url The stream URL to play.
 * @return 0 on success, negative value on failure.
 */
- (int)startPlay:(NSString *)url
    NS_SWIFT_NAME(startPlay(_:));

/**
 * Stop playback.
 *
 * @return 0 on success, negative value on failure.
 */
- (int)stopPlay NS_SWIFT_NAME(stopPlay());

/**
 * Pause playback.
 *
 * @return 0 on success, negative value on failure.
 */
- (int)pause NS_SWIFT_NAME(pause());

/**
 * Resume playback.
 *
 * @return 0 on success, negative value on failure.
 */
- (int)resume NS_SWIFT_NAME(resume());

/**
 * Seamlessly switch to a new stream URL.
 *
 * @param url The new stream URL.
 * @return 0 on success, negative value on failure.
 */
- (int)switchStream:(NSString *)url
    NS_SWIFT_NAME(switchStream(_:));

/**
 * Enable or disable receiving SEI messages.
 *
 * When enabled, SEI data embedded in the video stream will be delivered via the observer's didReceiveSEI callback.
 *
 * @param enable      Whether to enable SEI message receiving.
 * @param payloadType SEI payload type to filter (e.g. 243 for custom layout, 100 for volume layout, 245 for ASR).
 * @return 0 on success, negative value on failure.
 */
- (int)enableReceiveSeiMessage:(BOOL)enable payloadType:(int)payloadType
    NS_SWIFT_NAME(enableReceiveSeiMessage(_:payloadType:));

/**
 * Enable or configure an advanced feature.
 *
 * @param key   Feature key.
 * @param value Feature value.
 * @return 0 on success, negative value on failure.
 */
- (int)enableAdvancedFeature:(NSString *)key value:(id)value
    NS_SWIFT_NAME(enableAdvancedFeature(_:value:));

@end

NS_ASSUME_NONNULL_END
