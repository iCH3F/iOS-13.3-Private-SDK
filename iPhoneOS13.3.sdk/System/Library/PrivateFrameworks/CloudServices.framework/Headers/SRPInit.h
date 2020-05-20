//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudServices/SRPClientRequest-Protocol.h>

@class NSDictionary, NSString, SecureBackup;

@interface SRPInit : NSObject <SRPClientRequest>
{
    NSString *_recordLabel;
    NSDictionary *_escrowRecord;
    NSString *_recordID;
    SecureBackup *_sb;
}

@property(readonly, retain, nonatomic) SecureBackup *sb; // @synthesize sb=_sb;
@property(copy, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(retain, nonatomic) NSDictionary *escrowRecord; // @synthesize escrowRecord=_escrowRecord;
@property(copy, nonatomic) NSString *recordLabel; // @synthesize recordLabel=_recordLabel;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *recoveryPassphrase;
@property(readonly, copy, nonatomic) NSString *dsid;
- (id)validateInput;
- (id)initWithSecureBackup:(id)arg1;

@end

