//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSURL;

@protocol SXHost <NSObject>
- (BOOL)canOpenURL:(NSURL *)arg1;
- (void)openURL:(NSURL *)arg1 completion:(void (^)(BOOL))arg2;
@property(nonatomic, readonly) BOOL active;
@end

