//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOXPCSerializable-Protocol.h>

@class NSData, NSURL;

@interface GEOTileData : NSObject <GEOXPCSerializable>
{
    NSData *_data;
    NSURL *_fileURL;
    NSUInteger _cachedFileSize;
    long long _sandboxExtension;
    id _decodedRepresentation;
}

@property(readonly, nonatomic) id decodedRepresentation; // @synthesize decodedRepresentation=_decodedRepresentation;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) NSUInteger length;
- (void)encodeToXPCDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithDecodedRepresentation:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

@end

