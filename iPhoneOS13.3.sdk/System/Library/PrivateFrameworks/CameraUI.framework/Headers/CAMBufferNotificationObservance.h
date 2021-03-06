//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMBufferObservance.h>

@class NSNotificationCenter, NSObject, NSString;

@interface CAMBufferNotificationObservance : CAMBufferObservance
{
    NSString *_notification;
    NSObject *_object;
    NSNotificationCenter *_notificationCenter;
}

@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) __weak NSObject *object; // @synthesize object=_object;
@property(readonly, copy, nonatomic) NSString *notification; // @synthesize notification=_notification;
// - (void).cxx_destruct;
- (void)teardownObservanceForBuffer:(id)arg1;
- (void)setupObservanceForBuffer:(id)arg1;
- (void)fulfillWithChange:(id)arg1;
- (id)initWithNotification:(id)arg1 object:(id)arg2 center:(id)arg3 removeOnceEnabled:(BOOL)arg4;

@end

