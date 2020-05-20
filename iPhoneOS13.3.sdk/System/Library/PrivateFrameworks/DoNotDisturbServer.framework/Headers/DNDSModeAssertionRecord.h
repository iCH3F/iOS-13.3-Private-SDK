//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSModeAssertionStoreRecordDictionaryEncoding-Protocol.h>

@class DNDSModeAssertionDetailsRecord, DNDSModeAssertionSourceRecord, NSNumber, NSString;

@interface DNDSModeAssertionRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding>
{
    NSString *_UUID;
    NSNumber *_startDate;
    DNDSModeAssertionDetailsRecord *_details;
    DNDSModeAssertionSourceRecord *_source;
}

+ (id)recordForAssertion:(id)arg1;
+ (id)recordForDictionary:(id)arg1 keys:(const CDStruct_0a6492a9 )arg2;
@property(retain, nonatomic) DNDSModeAssertionSourceRecord *source; // @synthesize source=_source;
@property(retain, nonatomic) DNDSModeAssertionDetailsRecord *details; // @synthesize details=_details;
@property(retain, nonatomic) NSNumber *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
// - (void).cxx_destruct;
- (id)object;
- (id)dictionaryWithKeys:(const CDStruct_0a6492a9 )arg1 options:(NSUInteger)arg2;

@end

