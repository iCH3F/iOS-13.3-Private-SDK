//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SACFAbstractClientCommandCompleted.h>

@class NSString, SACFProvideContext;

@interface SACFFlowCompleted : SACFAbstractClientCommandCompleted
{
}

+ (id)flowCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)flowCompleted;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SACFProvideContext *updateContext;
@property(copy, nonatomic) NSString *domain;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

