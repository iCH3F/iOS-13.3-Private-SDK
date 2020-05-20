//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKMessagePartChatItem.h>

@class CKMediaObject, NSString, UIItemProvider, UITraitCollection;

@interface CKAttachmentMessagePartChatItem : CKMessagePartChatItem
{
    UIItemProvider *_dragItemProvider;
    UITraitCollection *_transcriptTraitCollection;
    CKMediaObject *_mediaObject;
}

@property(retain, nonatomic) CKMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
- (id)transcriptTraitCollection;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *transferGUID;
- (id)dragItemProvider;
- (id)pasteboardItems;
- (BOOL)shouldCacheSize;
- (NSUInteger)balloonCorners;
- (Class)balloonViewClass;
- (void)setTranscriptTraitCollection:(id)arg1;
- (BOOL)stickersSnapToPoint;
- (BOOL)canExport;
- (BOOL)canForward;
- (BOOL)canCopy;
- (CGSize)_transcoderGeneratedSizeFittingSize:(CGSize)arg1 sizeExists:(BOOL )arg2;
- (CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets )arg2;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (id)description;
- (id)composition;

@end

