//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSDInstantAlphaBinaryBitmap : NSObject
{
    long long mWidth;
    long long mHeight;
    long long mRowBytes;
    char mData;
}

@property(readonly, nonatomic) char data; // @synthesize data=mData;
@property(readonly, nonatomic) long long rowBytes; // @synthesize rowBytes=mRowBytes;
@property(readonly, nonatomic) long long height; // @synthesize height=mHeight;
@property(readonly, nonatomic) long long width; // @synthesize width=mWidth;
- (id)medianBitmap;
- (void)unionWithBitmap:(id)arg1;
- (void)dealloc;
- (id)initWithWidth:(long long)arg1 height:(long long)arg2;
- (id)initWithWidth:(long long)arg1 height:(long long)arg2 rowBytes:(long long)arg3;

@end

