//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeCore/STCoreOrganizationSettings.h>

@interface STFamilyOrganizationSettings : STCoreOrganizationSettings
{
}

- (id)redactedDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;
- (void)setPasscode:(id)arg1;
@property(nonatomic) BOOL isManaged; // @dynamic isManaged;
- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

@end

