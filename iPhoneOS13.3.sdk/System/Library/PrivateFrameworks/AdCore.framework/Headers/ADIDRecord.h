//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface ADIDRecord : NSObject
{
    BOOL _dirty;
    NSString *_ID;
    NSData *_encryptedID;
}

@property(retain, nonatomic) NSData *encryptedID; // @synthesize encryptedID=_encryptedID;
@property(nonatomic) BOOL dirty; // @synthesize dirty=_dirty;
@property(retain, nonatomic) NSString *ID; // @synthesize ID=_ID;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithID:(id)arg1;
- (id)init;

@end

