//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber;

@interface SAUIDelayedActionCommand : SADomainCommand
{
}

+ (id)delayedActionCommandWithDictionary:(id)arg1 context:(id)arg2;
+ (id)delayedActionCommand;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSNumber *timerValue;
@property(copy, nonatomic) NSArray *commands;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

