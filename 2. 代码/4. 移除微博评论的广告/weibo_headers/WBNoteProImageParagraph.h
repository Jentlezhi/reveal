//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNoteProParagraph.h"

#import "UITextViewDelegate-Protocol.h"
#import "WBNoteProImageParagraphCellDelegate-Protocol.h"

@class NSString, WBALAssetPickerContextManager, WBArticlePragraphModel, WBImageEditorCache, WBTimelinePicture;
@protocol WBNoteProParagraphDelegate><WBNoteProImageParagraphDelegate;

@interface WBNoteProImageParagraph : WBNoteProParagraph <WBNoteProImageParagraphCellDelegate, UITextViewDelegate>
{
    WBALAssetPickerContextManager *_assertPickContext;
    _Bool _cellNeedEditing;
    _Bool _coverCanDelete;
    NSString *_imageUrl;
    NSString *_imageDescription;
    double _imgHeight;
    WBImageEditorCache *_imageCache;
    WBArticlePragraphModel *_paragraphModel;
    WBTimelinePicture *_timelinePicture;
    unsigned long long _imageSourceType;
    double _imageAspectRatio;
    struct CGSize _coverSize;
}

+ (long long)paragraphType;
@property(nonatomic) double imageAspectRatio; // @synthesize imageAspectRatio=_imageAspectRatio;
@property(nonatomic) unsigned long long imageSourceType; // @synthesize imageSourceType=_imageSourceType;
@property(readonly, nonatomic) WBTimelinePicture *timelinePicture; // @synthesize timelinePicture=_timelinePicture;
@property(readonly, nonatomic) WBArticlePragraphModel *paragraphModel; // @synthesize paragraphModel=_paragraphModel;
@property(retain, nonatomic) WBImageEditorCache *imageCache; // @synthesize imageCache=_imageCache;
@property(nonatomic) _Bool coverCanDelete; // @synthesize coverCanDelete=_coverCanDelete;
@property(nonatomic) struct CGSize coverSize; // @synthesize coverSize=_coverSize;
@property(nonatomic) _Bool cellNeedEditing; // @synthesize cellNeedEditing=_cellNeedEditing;
@property(nonatomic) double imgHeight; // @synthesize imgHeight=_imgHeight;
@property(retain, nonatomic) NSString *imageDescription; // @synthesize imageDescription=_imageDescription;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)webImageLoadFinishedWithImageSize:(struct CGSize)arg1;
- (void)installHeadHandle:(id)arg1;
- (void)deleteHandler;
- (void)startEditingDescriptionHandler;
- (void)setupProParagraphCell:(id)arg1;
- (double)heightOfCellWithWidth:(double)arg1;
- (id)dictionaryRepresentation;
- (_Bool)updateWithDictionary:(id)arg1;
- (id)htmlString;
- (_Bool)isEmpty;
- (Class)paragraphCellClass;
- (void)resetImageCache;
- (id)initWithContex:(id)arg1 url:(id)arg2 imageHeight:(double)arg3;
- (id)initWithParagraphModel:(id)arg1;
- (id)initWithImageUrl:(id)arg1 andImageHeight:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <WBNoteProParagraphDelegate><WBNoteProImageParagraphDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

