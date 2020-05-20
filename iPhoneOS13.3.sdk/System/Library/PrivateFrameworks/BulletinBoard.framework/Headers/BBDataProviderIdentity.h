//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class BBSectionIcon, BBSectionInfo, BBSectionParameters, NSArray, NSDictionary, NSString;

@interface BBDataProviderIdentity : NSObject <NSSecureCoding>
{
    CDStruct_0e6e99aa _traits;
    NSString *_sectionIdentifier;
    NSString *_universalSectionIdentifier;
    BBSectionInfo *_defaultSectionInfo;
    NSString *_sectionDisplayName;
    BBSectionIcon *_sectionIcon;
    NSArray *_sortDescriptors;
    BBSectionParameters *_sectionParameters;
    NSArray *_defaultSubsectionInfos;
    NSDictionary *_subsectionDisplayNames;
    NSString *_sortKey;
    NSString *_parentSectionIdentifier;
    BOOL _syncsBulletinDismissal;
    NSDictionary *_filterDisplayNames;
}

+ (BOOL)supportsSecureCoding;
+ (id)identityForRemoteDataProvider:(id)arg1;
+ (id)identityForDataProvider:(id)arg1;
@property(copy, nonatomic) NSDictionary *filterDisplayNames; // @synthesize filterDisplayNames=_filterDisplayNames;
@property(readonly, nonatomic) BOOL syncsBulletinDismissal; // @synthesize syncsBulletinDismissal=_syncsBulletinDismissal;
@property(copy, nonatomic) NSString *parentSectionIdentifier; // @synthesize parentSectionIdentifier=_parentSectionIdentifier;
@property(copy, nonatomic) NSDictionary *subsectionDisplayNames; // @synthesize subsectionDisplayNames=_subsectionDisplayNames;
@property(copy, nonatomic) NSArray *defaultSubsectionInfos; // @synthesize defaultSubsectionInfos=_defaultSubsectionInfos;
@property(retain, nonatomic) BBSectionParameters *sectionParameters; // @synthesize sectionParameters=_sectionParameters;
@property(copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(copy, nonatomic) BBSectionIcon *sectionIcon; // @synthesize sectionIcon=_sectionIcon;
@property(copy, nonatomic) NSString *sectionDisplayName; // @synthesize sectionDisplayName=_sectionDisplayName;
@property(copy, nonatomic) BBSectionInfo *defaultSectionInfo; // @synthesize defaultSectionInfo=_defaultSectionInfo;
@property(copy, nonatomic) NSString *universalSectionIdentifier; // @synthesize universalSectionIdentifier=_universalSectionIdentifier;
@property(copy, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property(readonly, nonatomic) CDStruct_0e6e99aa traits; // @synthesize traits=_traits;
@property(copy, nonatomic) NSString *sortKey; // @synthesize sortKey=_sortKey;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initForDataProvider:(id)arg1 forRemoteDataProvider:(BOOL)arg2;

@end

