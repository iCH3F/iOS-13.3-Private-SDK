//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class CLPlacemark, NSString;

@interface ICLocation : NSManagedObject
{
    BOOL updatingPlace;
    CLPlacemark *_placemark;
}

+ (id)searchStringsForPlacemark:(id)arg1;
@property(nonatomic) BOOL updatingPlace; // @synthesize updatingPlace;
// - (void).cxx_destruct;
- (void)didTurnIntoFault;
- (void)setLocationFromPlacemark:(id)arg1;
- (void)setLocationFromURL:(id)arg1;
@property(readonly, nonatomic) NSString *formattedAddress;
- (id)searchStrings;
@property(retain, nonatomic) CLPlacemark *placemark; // @synthesize placemark=_placemark;

@end

