//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NUPixelFormat;

@protocol NUBuffer <NSObject>
@property(readonly, nonatomic) const void bytes;
@property(readonly, nonatomic) long long rowBytes;
@property(readonly, nonatomic) NUPixelFormat *format;
@property(readonly, nonatomic) CDStruct_912cb5d2 size;
- (const void )bytesAtPoint:(CDStruct_912cb5d2)arg1;
@end

