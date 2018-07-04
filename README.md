# erepro-apis

erepro apis specification

# Structure

```
  ▸ erepro-apis/
    ▸ api/
      ▸ branches/
        ▸ v1/
        ▸ v2/
      ▸ listings/
        ▸ v1/

  ▸ erepro-infra/
    ▸ e2e/
    ▸ infra/
    ▸ istio/
    ▸ k8s/

  ▸ erepro/
    ▸ account/
    ▸ auth/
    ▸ analytics/
    ▸ branches/
    ▸ listings/
```

# Build

```bash
make PROTOINCLUDE=$GOPATH/src/github.com/googleapis/googleapis LANGUAGE=python OUTPUT=out
```

# API

* listing details endpoint
    * id, address, published_date, status, no_beds, no_baths, price, currency
* branch details endpoint
    * id, name, address, no_listings
* listing stats endpoint
    * id, status, search_views, norm_detail_views, prem_detail_views, norm_click_through, prem_click_through
* branch stats endpoint (listings owned by the branch)
    * id, status, search_views, norm_detail_views, prem_detail_views, norm_click_through, prem_click_through
