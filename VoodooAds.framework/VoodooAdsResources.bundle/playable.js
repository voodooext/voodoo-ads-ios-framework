
var VAPlayableAds = {
    
    idfa: "%@",
    placementFormat : "%@",
    publisherName : "%@",
    isStoreCombined : "%i",
    
    voodooAdsExit : function() {
        window.webkit.messageHandlers.voodooAds.postMessage('Exit');
    }
    
};
