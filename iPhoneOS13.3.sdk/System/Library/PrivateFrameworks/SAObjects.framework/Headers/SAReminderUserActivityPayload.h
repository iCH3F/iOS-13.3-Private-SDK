//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAReminderPayload-Protocol.h>

@class SAUserActivity;

@interface SAReminderUserActivityPayload : AceObject <SAReminderPayload>
{
}

+ (id)userActivityPayloadWithDictionary:(id)arg1 context:(id)arg2;
+ (id)userActivityPayload;
@property(retain, nonatomic) SAUserActivity *userActivity;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

