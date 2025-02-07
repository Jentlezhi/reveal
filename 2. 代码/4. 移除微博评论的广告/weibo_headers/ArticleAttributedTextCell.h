//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RecyclableScrollViewCell.h"

#import "WBCopyAndShareTextContentView-Protocol.h"

@class DTAttributedTextContentView, NSAttributedString, NSMutableDictionary, NSString, UIView, WBArticlePragraphModel, WBRecycleScrollView;
@protocol DTAttributedTextContentViewDelegate, WBCopyAndShardContentViewDelegate;

@interface ArticleAttributedTextCell : RecyclableScrollViewCell <WBCopyAndShareTextContentView>
{
    id <DTAttributedTextContentViewDelegate> _textDelegate;
    DTAttributedTextContentView *_attributedTextContextView;
    unsigned long long _htmlHash;
    _Bool _hasFixedRowHeight;
    WBRecycleScrollView *_containingRecycleScrollView;
    struct {
        unsigned int conformsToDTAttributedTextContentViewDelegate:1;
    } _protocolConformsTo;
    _Bool __drawsHorizontalRule;
    id _delegate;
    WBArticlePragraphModel *_pragraphModel;
    UIView *_selectionView;
    id <WBCopyAndShardContentViewDelegate> wbCopyAndShareContentDelegate;
    NSMutableDictionary *_attributedTextContentViewDictionary;
}

+ (double)rowheightWithHtmlString:(id)arg1 constraintToContentWidth:(double)arg2 isNewUIStyle:(_Bool)arg3;
+ (struct UIEdgeInsets)uiStyleEdgeInset:(_Bool)arg1;
+ (void)renderDrawingContext:(id)arg1 withContentWidth:(unsigned long long)arg2;
@property(retain, nonatomic) NSMutableDictionary *attributedTextContentViewDictionary; // @synthesize attributedTextContentViewDictionary=_attributedTextContentViewDictionary;
@property(nonatomic) _Bool hasFixedRowHeight; // @synthesize hasFixedRowHeight=_hasFixedRowHeight;
@property(nonatomic) __weak id <DTAttributedTextContentViewDelegate> textDelegate; // @synthesize textDelegate=_textDelegate;
@property(nonatomic) __weak id <WBCopyAndShardContentViewDelegate> wbCopyAndShareContentDelegate; // @synthesize wbCopyAndShareContentDelegate;
- (id)pragraphModel;
- (id)delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) DTAttributedTextContentView *attributedTextContextView;
- (void)setHTMLString:(id)arg1 options:(id)arg2;
- (void)setHTMLString:(id)arg1;
@property(retain, nonatomic) NSAttributedString *attributedString;
- (void)updateDrawsHorizontalRuleWithAttributedString;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setPragraphModel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (double)requiredRowHeightWithContentWidth:(double)arg1;
- (void)didMoveToSuperview;
- (id)_findContainingCycleScrollView;
- (void)layoutSubviews;
- (void)singleTap:(id)arg1;
- (void)longPress:(id)arg1;
@property(readonly, nonatomic) NSString *textContent;
@property(readonly, nonatomic) struct CGRect menuRect;
@property(nonatomic) _Bool wbCopyAndShareContentSelected; // @dynamic wbCopyAndShareContentSelected;
@property(readonly, nonatomic) UIView *selectionView; // @synthesize selectionView=_selectionView;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

