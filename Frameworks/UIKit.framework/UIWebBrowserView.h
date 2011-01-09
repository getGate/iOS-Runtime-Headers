/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMNode, UIWebFormDelegate, UIResponder, UIWebTouchEventsGestureRecognizer, NSMutableArray, NSTimer, UIWebFormAccessory, NSObject<UIFormPeripheral>, WebPDFView;



@interface UIWebBrowserView : UIWebDocumentView <UIWebFormAccessoryDelegate, UIBrowserDocumentController>
{
    UIWebFormAccessory *_accessory;
    NSObject<UIFormPeripheral> *_input;
    DOMNode *_currentAssistedNode;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _inputViewBounds;
    float _lastAdjustmentForScroller;
    unsigned int _accessoryEnabled : 1;
    unsigned int _forceInputView : 1;
    unsigned int _formIsAutoFilling : 1;
    unsigned int _inputViewObeysDOMFocus : 1;
    unsigned int _hasEditedTextField : 1;
    UIWebTouchEventsGestureRecognizer *_webTouchEventsGestureRecognizer;
    UIWebFormDelegate *_formDelegate;
    UIResponder *_editingDelegateForEverythingExceptForms;
    struct { 
        NSMutableArray *all; 
        NSMutableArray *html; 
        NSMutableArray *javascript; 
        NSMutableArray *css; 
        NSMutableArray *error; 
        NSMutableArray *warning; 
        NSMutableArray *tip; 
        NSMutableArray *log; 
    } _messages;
    struct { 
        WebPDFView *view; 
        NSTimer *timer; 
    } _pdf;
}

@property BOOL allowsInlineMediaPlayback;
@property BOOL mediaPlaybackRequiresUserAction;
@property(readonly) BOOL hasEditedTextField;
@property CGRect inputViewBounds;
@property BOOL inputViewObeysDOMFocus;
@property(getter=isAccessoryEnabled) BOOL accessoryEnabled;
@property UIResponder *_editingDelegateForEverythingExceptForms;
@property(retain) DOMNode *_currentAssistedNode;
@property(retain) NSObject<UIFormPeripheral> *_input;
@property(retain) UIWebFormAccessory *_accessory;

+ (id)_PDFPageNumberLabel;
+ (BOOL)isAutoFillAllowed;
+ (float)preferredScrollDecelerationFactor;
+ (id)getUIWebBrowserViewForWebFrame:(id)arg1;

- (void)_startAssistingKeyboard;
- (void)_stopAssistingKeyboard;
- (void)_startAssistingSelectForNode:(id)arg1;
- (void)_stopAssistingSelectForNode:(id)arg1;
- (void)_stopAssistingFormNode;
- (void)_displayFormNodeInputView;
- (void)_updateAccessory;
- (void)_scrollCaretToVisible:(id)arg1;
- (BOOL)canAutoFill;
- (void)_autoFillFrame:(id)arg1;
- (void)webView:(id)arg1 willCloseFrame:(id)arg2;
- (void)webView:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 formStateDidFocusNode:(id)arg2;
- (void)webView:(id)arg1 formStateDidBlurNode:(id)arg2;
- (void)_webTouchEventsRecognized:(id)arg1;
- (struct CGPoint { float x1; float x2; })_convertWindowPointToViewport:(struct CGPoint { float x1; float x2; })arg1;
- (void)_centerRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSizeChange:(BOOL)arg2 withVisibleHeight:(float)arg3 pinningEdge:(NSInteger)arg4;
- (void)_zoomToNode:(id)arg1 forceScroll:(BOOL)arg2;
- (void)_zoomToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 ensuringVisibilityOfRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withScale:(float)arg3 forceScroll:(BOOL)arg4;
- (void)_zoomToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withScale:(float)arg2;
- (void)webView:(id)arg1 didReceiveMessage:(id)arg2;
- (id)messagesMatchingMask:(NSInteger)arg1;
- (void)clearMessagesMatchingMask:(NSInteger)arg1;
- (void)_hidePDFPageNumberLabel;
- (BOOL)_domainIsWhitelistedForUDIDHeader:(id)arg1;
- (void)_dumpWebArchiveAtPath:(id)arg1;
- (void)_clearSelectionAndUI;
- (void)_setSelectedDOMRangeAndUpdateUI:(id)arg1;
- (id)_buildVersion;
- (void)_setBrowserUserAgentProductVersion:(id)arg1 bundleVersion:(id)arg2;
- (BOOL)hasEditedTextField;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })inputViewBounds;
- (void)setInputViewBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)inputViewObeysDOMFocus;
- (void)setInputViewObeysDOMFocus:(BOOL)arg1;
- (BOOL)isAccessoryEnabled;
- (void)setAccessoryEnabled:(BOOL)arg1;
- (void)set_currentAssistedNode:(id)arg1;
- (void)set_input:(id)arg1;
- (void)set_accessory:(id)arg1;
- (id)_editingDelegateForEverythingExceptForms;
- (id)_currentAssistedNode;
- (id)_input;
- (id)_accessory;
- (void)accessoryTab:(BOOL)arg1;
- (void)accessoryAutoFill;
- (id)webVisiblePositionForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)formDelegateHandleTextChangeWithAutoFillSuggestions:(BOOL)arg1;
- (void)webViewFormEditedStatusHasChanged:(id)arg1;
- (BOOL)isAutoFilling;
- (void)autoFillWithElementValue;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_editingRect;
- (void)set_editingDelegateForEverythingExceptForms:(id)arg1;
- (void)_setUIWebViewUserAgent;
- (void)_startURLificationIfNeededCoalesce:(BOOL)arg1;
- (void)setAllowsInlineMediaPlayback:(BOOL)arg1;
- (BOOL)allowsInlineMediaPlayback;
- (void)setMediaPlaybackRequiresUserAction:(BOOL)arg1;
- (BOOL)mediaPlaybackRequiresUserAction;
- (void)_updateScrollerViewForInputView:(id)arg1;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webViewDidPreventDefaultForEvent:(id)arg1;
- (void)installGestureRecognizers;
- (void)assistFormNode:(id)arg1;
- (void)_resetFormDataForFrame:(id)arg1;
- (void)_clearAllConsoleMessages;
- (void)_setPDFView:(id)arg1;
- (void)_updatePDFPageNumberLabelWithUserScrolling:(BOOL)arg1;
- (void)_cleanUpPDF;
- (id)_requestWithUDIDHeaderIfAppropriate:(id)arg1;
- (id)formElement;
- (id)textFormElement;
- (BOOL)playsNicelyWithGestures;
- (void)acceptedAutoFillWord:(id)arg1;
- (BOOL)isAutoFillMode;
- (void)accessoryDone;
- (id)_editingDelegate;
- (void)_keyboardWillShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (id)_keyboardResponder;
- (BOOL)_requiresKeyboardResetOnReload;
- (id)inputAccessoryView;
- (void)promptForReplace:(id)arg1;
- (id)inputView;
- (BOOL)resignFirstResponder;
- (BOOL)_requiresKeyboardWhenFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_handleKeyEvent:(struct __GSEvent { }*)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end