//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSURL, SAFmfGeoFence;

@interface SAFmfGeoFenceSetCompleted : SADomainCommand <SAServerBoundCommand>
{
}

+ (id)geoFenceSetCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)geoFenceSetCompleted;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSURL *searchContext;
@property(retain, nonatomic) SAFmfGeoFence *geoFence;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

