"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 814."""

def spec_graphene_hardened_malloc_814() -> dict:
    return {"system": "GrapheneOS", "spec_id": 814, "quarantine_slabs": 15, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_814():
    s = spec_graphene_hardened_malloc_814()
    assert s["spec_id"] == 814
