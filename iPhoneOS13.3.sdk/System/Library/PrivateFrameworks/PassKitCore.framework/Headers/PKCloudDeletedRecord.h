//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CKRecordID, NSString;

@interface PKCloudDeletedRecord : NSObject <NSSecureCoding>
{
    CKRecordID *_recordID;
    NSString *_recordType;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
@property(readonly, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordID:(id)arg1 recordType:(id)arg2;

@end

