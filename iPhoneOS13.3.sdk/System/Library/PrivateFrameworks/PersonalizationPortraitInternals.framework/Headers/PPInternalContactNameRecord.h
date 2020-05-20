//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortrait/PPContactNameRecord.h>

@class PPPBContactNameRecord;

@interface PPInternalContactNameRecord : PPContactNameRecord
{
    PPPBContactNameRecord *_pbRecord;
}

// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)pbRecord;
- (id)cityNames;
- (id)streetNames;
- (id)relatedNames;
- (id)nickname;
- (id)jobTitle;
- (id)organizationName;
- (id)phoneticLastName;
- (id)lastName;
- (id)phoneticMiddleName;
- (id)middleName;
- (id)phoneticFirstName;
- (id)firstName;
- (id)sourceIdentifier;
- (unsigned char)changeType;
- (unsigned char)source;
- (void)setScore:(double)arg1;
- (double)score;
- (id)identifier;
- (id)clientCopy;
- (id)initWithPBContactNameRecord:(id)arg1;
- (id)initWithIdentifier:(id)arg1 score:(double)arg2 source:(unsigned char)arg3 sourceIdentifier:(id)arg4 changeType:(unsigned char)arg5 firstName:(id)arg6 phoneticFirstName:(id)arg7 middleName:(id)arg8 phoneticMiddleName:(id)arg9 lastName:(id)arg10 phoneticLastName:(id)arg11 organizationName:(id)arg12 jobTitle:(id)arg13 nickname:(id)arg14 relatedNames:(id)arg15 streetNames:(id)arg16 cityNames:(id)arg17;

@end

