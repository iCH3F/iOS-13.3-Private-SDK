//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface TSPPackageEntryInfo : NSObject
{
    unsigned int _CRC;
    NSUInteger _encodedLength;
    NSDate *_lastModificationDate;
}

@property(readonly, nonatomic) unsigned int CRC; // @synthesize CRC=_CRC;
@property(readonly, nonatomic) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property(readonly, nonatomic) NSUInteger encodedLength; // @synthesize encodedLength=_encodedLength;
// - (void).cxx_destruct;
- (id)initWithEncodedLength:(NSUInteger)arg1 lastModificationDate:(id)arg2 CRC:(unsigned int)arg3;
- (id)init;

@end
