//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SXImageRequest : NSObject
{
    BOOL _preserveColorspace;
    NSString *_imageIdentifier;
    NSURL *_URL;
    NSUInteger _qualities;
    id /* CDUnknownBlockType */ _loadingBlock;
    CGSize _size;
}

@property(readonly, nonatomic) BOOL preserveColorspace; // @synthesize preserveColorspace=_preserveColorspace;
@property(copy, nonatomic) id /* CDUnknownBlockType */ loadingBlock; // @synthesize loadingBlock=_loadingBlock;
@property(readonly, nonatomic) NSUInteger qualities; // @synthesize qualities=_qualities;
@property(readonly, nonatomic) CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *imageIdentifier; // @synthesize imageIdentifier=_imageIdentifier;
// - (void).cxx_destruct;
- (id)initWithImageIdentifier:(id)arg1 imageQualities:(NSUInteger)arg2 url:(id)arg3 size:(CGSize)arg4 preserveColorspace:(BOOL)arg5 loadingBlock:(id /* CDUnknownBlockType */)arg6;

@end

