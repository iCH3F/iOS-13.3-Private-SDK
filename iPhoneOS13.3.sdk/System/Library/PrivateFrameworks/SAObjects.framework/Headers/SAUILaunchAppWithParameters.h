//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSDictionary, NSString;

@interface SAUILaunchAppWithParameters : SABaseClientBoundCommand
{
}

+ (id)launchAppWithParametersWithDictionary:(id)arg1 context:(id)arg2;
+ (id)launchAppWithParameters;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSDictionary *parameters;
@property(copy, nonatomic) NSString *appBundleId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

