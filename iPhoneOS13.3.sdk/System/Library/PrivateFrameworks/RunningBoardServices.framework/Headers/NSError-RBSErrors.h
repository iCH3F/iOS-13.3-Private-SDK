//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (RBSErrors)
+ (id)rbs_errorClientNotEntitled:(id)arg1 permanent:(BOOL)arg2;
- (BOOL)rbs_isPermanentFailure;
- (BOOL)rbs_isServiceDenied;
@end

