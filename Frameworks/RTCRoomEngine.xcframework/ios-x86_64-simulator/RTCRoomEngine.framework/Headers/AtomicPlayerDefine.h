// Copyright (c) 2026 Tencent. All rights reserved.
// Author: AtomicXCore Player

#import <Foundation/Foundation.h>
#import "TUIEngineSymbolExport.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Atomic player error codes.
 */
typedef NS_ENUM(NSInteger, AtomicPlayerCode) {
    /// No error, operation succeeded.
    AtomicPlayerCodeOK = 0,

    /// Operation failed.
    AtomicPlayerCodeErrorFailed = -1,

    /// Invalid parameter.
    AtomicPlayerCodeErrorInvalidParameter = -1001,

    /// Instance not exist.
    AtomicPlayerCodeErrorInstanceNotExist = -1002,

    /// No available HEVC decoder on the device.
    AtomicPlayerCodeErrorNoAvailableHEVCDecoders = -2304,
};

/**
 * Statistics for player runtime metrics.
 */
TUIENGINE_EXPORT
NS_SWIFT_NAME(AtomicPlayerEngineStatistics)
@interface AtomicPlayerStatistics : NSObject

@property(nonatomic, assign) int width;
@property(nonatomic, assign) int height;
@property(nonatomic, assign) int fps;
@property(nonatomic, assign) int videoBitrate;
@property(nonatomic, assign) int audioBitrate;

@end

NS_ASSUME_NONNULL_END
