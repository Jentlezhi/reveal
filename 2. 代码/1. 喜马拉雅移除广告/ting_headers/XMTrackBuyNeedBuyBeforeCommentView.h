//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTrackBuyView.h"

@class UIButton, UIImageView, UILabel, XMAlbumItem;

@interface XMTrackBuyNeedBuyBeforeCommentView : XMTrackBuyView
{
    UIImageView *_stateImageView;
    UILabel *_textFinishLab;
    UIButton *_firstBtn;
    XMAlbumItem *_album;
}

+ (struct CGSize)sizeForAlbum:(id)arg1;
@property(retain, nonatomic) XMAlbumItem *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (void)onbuyBeforeComment;
- (void)layoutSubviews;
- (void)customStateInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

