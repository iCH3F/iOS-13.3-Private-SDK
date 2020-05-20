//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSMutableArray, NSString;

@interface PKDiff : NSObject <NSSecureCoding>
{
    NSMutableArray *_hunks;
    NSString *_passUniqueID;
    NSData *_passManifestHash;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSData *passManifestHash; // @synthesize passManifestHash=_passManifestHash;
@property(copy, nonatomic) NSString *passUniqueID; // @synthesize passUniqueID=_passUniqueID;
// - (void).cxx_destruct;
- (NSUInteger)_hunkIndexForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)isEqualToDiff:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)anyKey;
- (void)addHunksFromDiff:(id)arg1;
- (void)removeHunkForKey:(id)arg1;
- (BOOL)getHunkForKey:(id)arg1 oldValue:(id )arg2 newValue:(id )arg3 message:(id )arg4;
- (id)description;
- (void)enumerateHunks:(id /* CDUnknownBlockType */)arg1;
- (void)key:(id )arg1 oldValue:(id )arg2 newValue:(id )arg3 message:(id )arg4 forHunkAtIndex:(long long)arg5;
- (long long)hunkCount;
- (void)addHunkWithKey:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 message:(id)arg4;
- (id)init;

@end

