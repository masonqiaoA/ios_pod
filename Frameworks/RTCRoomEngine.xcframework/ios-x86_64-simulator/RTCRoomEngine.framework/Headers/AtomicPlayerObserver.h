// Copyright (c) 2026 Tencent. All rights reserved.
// Author: AtomicXCore Player

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AtomicPlayerDefine.h"

@class AtomicPlayerEngine;

NS_ASSUME_NONNULL_BEGIN

/**
 * Atomic player event observer.
 */
NS_SWIFT_NAME(AtomicPlayerEngineObserver)
@protocol AtomicPlayerObserver <NSObject>

@optional

/**
 * Called when the first video frame is rendered.
 *
 * @param player    The player instance.
 * @param elapsedMs Time elapsed since playback started, in milliseconds.
 */
- (void)onDidRenderFirstVideoFrame:(AtomicPlayerEngine *)player elapsedMs:(int)elapsedMs
    NS_SWIFT_NAME(onDidRenderFirstVideoFrame(_:elapsedMs:));

/**
 * Called when the player starts buffering.
 *
 * @param player The player instance.
 */
- (void)onDidStartBuffering:(AtomicPlayerEngine *)player
    NS_SWIFT_NAME(onDidStartBuffering(_:));

/**
 * Called when the player ends buffering.
 *
 * @param player    The player instance.
 * @param elapsedMs Buffering duration in milliseconds.
 */
- (void)onDidEndBuffering:(AtomicPlayerEngine *)player elapsedMs:(int)elapsedMs
    NS_SWIFT_NAME(onDidEndBuffering(_:elapsedMs:));

/**
 * Called when the player successfully connects to the stream.
 *
 * @param player The player instance.
 */
- (void)onDidConnect:(AtomicPlayerEngine *)player
    NS_SWIFT_NAME(onDidConnect(_:));

/**
 * Called when the player disconnects from the stream.
 *
 * @param player The player instance.
 */
- (void)onDidDisconnect:(AtomicPlayerEngine *)player
    NS_SWIFT_NAME(onDidDisconnect(_:));

/**
 * Called when the video resolution changes.
 *
 * @param player The player instance.
 * @param width  New video width.
 * @param height New video height.
 */
- (void)onDidChangeVideoSize:(AtomicPlayerEngine *)player width:(int)width height:(int)height
    NS_SWIFT_NAME(onDidChangeVideoSize(_:width:height:));

/**
 * Called periodically with player statistics.
 *
 * @param player The player instance.
 * @param stats  Current playback statistics.
 */
- (void)onDidUpdateStatistics:(AtomicPlayerEngine *)player stats:(AtomicPlayerStatistics *)stats
    NS_SWIFT_NAME(onDidUpdateStatistics(_:stats:));

/**
 * Called when a snapshot is taken.
 *
 * @param player The player instance.
 * @param image  The captured snapshot image.
 */
- (void)onDidTakeSnapshot:(AtomicPlayerEngine *)player image:(UIImage *_Nullable)image
    NS_SWIFT_NAME(onDidTakeSnapshot(_:image:));

/**
 * Called when stream switching completes.
 *
 * @param player    The player instance.
 * @param streamUrl The new stream URL.
 * @param code      Result code, 0 for success.
 */
- (void)onDidSwitchStream:(AtomicPlayerEngine *)player streamUrl:(NSString *)streamUrl code:(int)code
    NS_SWIFT_NAME(onDidSwitchStream(_:streamUrl:code:));

/**
 * Called when a playback error occurs.
 *
 * @param player  The player instance.
 * @param code    Error code.
 * @param message Error message.
 */
- (void)onDidFailWithCode:(AtomicPlayerEngine *)player code:(int)code message:(NSString *)message
    NS_SWIFT_NAME(onDidFailWithCode(_:code:message:));

/**
 * Called when an SEI message is received (with data type).
 *
 * @param player   The player instance.
 * @param data     SEI data.
 * @param dataType SEI data type.
 */
- (void)onDidReceiveSEIMessage:(AtomicPlayerEngine *)player data:(NSData *)data dataType:(int)dataType
    NS_SWIFT_NAME(onDidReceiveSEIMessage(_:data:dataType:));

/**
 * Called when an SEI message is received.
 *
 * @param player The player instance.
 * @param data   SEI data.
 */
- (void)onDidReceiveSEI:(AtomicPlayerEngine *)player data:(NSData *)data
    NS_SWIFT_NAME(onDidReceiveSEI(_:data:));

@end

NS_ASSUME_NONNULL_END
