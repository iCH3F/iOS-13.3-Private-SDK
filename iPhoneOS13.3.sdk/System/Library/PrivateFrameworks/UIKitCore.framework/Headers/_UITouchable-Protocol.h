//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSSet, UIEvent;

@protocol _UITouchable <NSObject>
- (void)touchesEstimatedPropertiesUpdated:(NSSet *)arg1;
- (void)touchesCancelled:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesEnded:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesMoved:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesBegan:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
@end

