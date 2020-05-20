//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/SGRealtimeSuggestion-Protocol.h>

@class NSString, SGContact, SGExtractionInfo;

@interface SGRealtimeContact : NSObject <NSSecureCoding, NSCopying, SGRealtimeSuggestion>
{
    BOOL _isHarvested;
    int _state;
    int _updatedFields;
    SGContact *_contact;
    NSString *_cnContactIdentifier;
    SGExtractionInfo *_extractionInfo;
}

+ (id)realtimeContactForFields:(id)arg1 updatedFields:(int)arg2 addedToCuratedContact:(id)arg3;
+ (id)realtimeContactForNewContact:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL isHarvested; // @synthesize isHarvested=_isHarvested;
@property(readonly, nonatomic) SGExtractionInfo *extractionInfo; // @synthesize extractionInfo=_extractionInfo;
@property(readonly, nonatomic) NSString *cnContactIdentifier; // @synthesize cnContactIdentifier=_cnContactIdentifier;
@property(readonly, nonatomic) SGContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) int updatedFields; // @synthesize updatedFields=_updatedFields;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)setExtractionInfo;
@property(readonly) NSUInteger hash;
- (BOOL)isEqualToRealtimeContact:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)markedAsHarvested;
- (id)initWithState:(int)arg1 updatedFields:(int)arg2 contact:(id)arg3 identifier:(id)arg4;
// - (id)copyWithZone:(_NSZone )arg1;

@end

