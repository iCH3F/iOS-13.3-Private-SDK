//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFServiceTreeMatching-Protocol.h>

@class NSSet, NSString;

@interface HFServiceTreeTypePredicate : NSObject <HFServiceTreeMatching>
{
    BOOL _includeChildServices;
    NSSet *_serviceTypes;
    NSSet *_serviceSubtypes;
}

+ (id)na_identity;
+ (id)predicateWithServiceType:(id)arg1 includeChildServices:(BOOL)arg2;
+ (id)predicateWithServiceType:(id)arg1;
+ (id)anyServiceTypePredicateIncludingChildServices;
+ (id)anyServiceTypePredicate;
@property(readonly, nonatomic) BOOL includeChildServices; // @synthesize includeChildServices=_includeChildServices;
@property(readonly, copy, nonatomic) NSSet *serviceSubtypes; // @synthesize serviceSubtypes=_serviceSubtypes;
@property(readonly, copy, nonatomic) NSSet *serviceTypes; // @synthesize serviceTypes=_serviceTypes;
// - (void).cxx_destruct;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)matchingServicesForRootService:(id)arg1;
- (BOOL)_matchesService:(id)arg1;
- (id)initWithServiceTypes:(id)arg1 serviceSubtypes:(id)arg2 includeChildServices:(BOOL)arg3;

@end

