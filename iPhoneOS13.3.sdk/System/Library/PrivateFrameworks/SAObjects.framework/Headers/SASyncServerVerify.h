//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@interface SASyncServerVerify : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)serverVerifyWithDictionary:(id)arg1 context:(id)arg2;
+ (id)serverVerify;
- (BOOL)requiresResponse;
@property(nonatomic) BOOL performInternalVerification;
@property(nonatomic) BOOL fetchSyncDebugInfo;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

