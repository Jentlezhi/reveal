//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBCardViewBubbleView.h"

@class UIView, WBPageCardViewBase;
@protocol WBPageCardBubbleViewDelegate;

@interface WBPageCardBubbleView : WBCardViewBubbleView
{
    WBPageCardViewBase *mainView;
    _Bool listPage;
    _Bool _listPage;
    UIView *_loadingView;
    unsigned long long _bubbleType;
    id <WBPageCardBubbleViewDelegate> _clickDelegate;
}

+ (double)rowHeightOfDataObject:(id)arg1 tableView:(id)arg2 isListPage:(_Bool)arg3;
+ (double)rowHeightOfDataObject:(id)arg1 constraintWidth:(double)arg2 tableView:(id)arg3 isListPage:(_Bool)arg4;
+ (long long)bubbleViewRowHeightOfTrendViewModel:(id)arg1 constraintWidth:(double)arg2 tableView:(id)arg3 isListPage:(_Bool)arg4;
+ (double)calculateRowHeightOfDataObject:(id)arg1 tableView:(id)arg2 isListPage:(_Bool)arg3;
@property(nonatomic) __weak id <WBPageCardBubbleViewDelegate> clickDelegate; // @synthesize clickDelegate=_clickDelegate;
@property(nonatomic) _Bool listPage; // @synthesize listPage=_listPage;
@property(retain, nonatomic) WBPageCardViewBase *mainView; // @synthesize mainView;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
- (void).cxx_destruct;
- (void)reloadWithBubbleType:(unsigned long long)arg1 isNew:(_Bool)arg2 canHighlight:(_Bool)arg3;
- (id)accessibilityValue;
- (void)reloadUIElements;
- (long long)bubbleViewRowHeightOfDataObject:(id)arg1 constraintWidth:(double)arg2 tableView:(id)arg3 isListPage:(_Bool)arg4;
- (void)resetPageCard:(id)arg1;
- (void)setTrendCardViewModel:(id)arg1;
- (void)refreshSubViewsWithPageCard:(id)arg1;
@property(nonatomic) unsigned long long bubbleType; // @synthesize bubbleType=_bubbleType;
- (long long)selectionCellStyle;
- (void)setDelegate:(id)arg1;
- (_Bool)highlightCellBackgroundWhenPressed;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

