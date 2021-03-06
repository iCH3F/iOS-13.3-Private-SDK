//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString, NSURL, SAObjectSupport;

@interface SACommandSupport : AceObject <SAAceSerializable>
{
}

+ (id)commandSupportWithDictionary:(id)arg1 context:(id)arg2;
+ (id)commandSupport;
@property(nonatomic) long long weight;
@property(copy, nonatomic) NSArray *supportedConstraints;
@property(copy, nonatomic) NSURL *serverEndpoint;
@property(retain, nonatomic) SAObjectSupport *resultSupport;
@property(copy, nonatomic) NSString *commandId;
@property(copy, nonatomic) NSString *aceVersion;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

