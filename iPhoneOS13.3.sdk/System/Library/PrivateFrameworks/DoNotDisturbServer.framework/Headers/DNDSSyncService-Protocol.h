//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary;
@protocol DNDSSyncServiceDelegate;

@protocol DNDSSyncService <NSObject>
@property(nonatomic) __weak id <DNDSSyncServiceDelegate> delegate;
- (void)sendMessage:(NSDictionary *)arg1 withVersionNumber:(NSUInteger)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)resume;
@end

