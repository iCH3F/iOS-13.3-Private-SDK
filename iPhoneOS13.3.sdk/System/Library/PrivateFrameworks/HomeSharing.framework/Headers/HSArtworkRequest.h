//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeSharing/HSRequest.h>

@interface HSArtworkRequest : HSRequest
{
}

+ (id)requestWithDatabaseID:(unsigned int)arg1 itemID:(NSUInteger)arg2 size:(CGSize)arg3;
- (BOOL)acceptsGzipEncoding;
- (BOOL)isConcurrent;
- (id)initWithDatabaseID:(unsigned int)arg1 itemID:(NSUInteger)arg2 size:(CGSize)arg3;

@end

