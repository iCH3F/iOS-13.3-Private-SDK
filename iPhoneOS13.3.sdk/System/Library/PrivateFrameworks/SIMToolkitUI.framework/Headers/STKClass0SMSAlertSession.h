//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SIMToolkitUI/STKAlertSession.h>

@interface STKClass0SMSAlertSession : STKAlertSession
{
    long long _slot;
}

+ (BOOL)_requiresResponseProvider;
@property(readonly, nonatomic) long long slot; // @synthesize slot=_slot;
- (id)initWithLogger:(id)arg1 responseProvider:(id)arg2 options:(id)arg3 sound:(id)arg4 slot:(long long)arg5;
- (id)initWithLogger:(id)arg1 responseProvider:(id)arg2 options:(id)arg3 sound:(id)arg4;

@end

